#include "shell.h"
#define abs_free(ptr) (_free((void **) (ptr))) 
/**
  * 1. Print the prompt
  * 2. Get input from stdin
  * 3. Tokenize the input
  * 4. Malloc the exact memory to hold token pointers (string array)
  * 5. Store tokenized input in a string array
  * 6. Print the tokens
  * 7. Repeat
  */


char **tokenizer(char *line)
{
	char *dup_line = NULL, *token = NULL, **tokens = NULL;
	size_t i, tok_count = 0;

	/* check if line is NULL */
	if (!line || !(*line))
		return (NULL);

	/* duplicate line for counting tokens */
	dup_line = strdup(line);
	token = strtok(dup_line, " ");
	while (token)
	{
		++tok_count;
		token = strtok(NULL, " ");
	}
	free(dup_line);
	/* allocate enough mem for tokens array */
	if (tok_count > 0)
	{
		tokens = malloc(sizeof(char *) * (tok_count + 1));
		if (tokens == NULL)
		{
			fprintf(stderr, "malloc failed\n");
			exit(EXIT_FAILURE);
		}
		tokens[tok_count] = NULL;
		/* store tokens in alloced array */
		token = strtok(line, " ");
		for (i = 0; token; i++)
		{
			tokens[i] = strdup(token);
			token = strtok(NULL, " ");
		}
		free(token);
		token = NULL;
	}
	tok_count = 0;
	return (tokens);
}

void freeTokens(char **tokens)
{
	int i;
        
	for (i = 0; tokens[i]; ++i)
	{
                free(tokens[i]);
		tokens[i] = NULL;
	}
        free(tokens);
	tokens = NULL;
}

int main(void)
{
	ssize_t bytesR = 0;
	size_t n, i;
	char *line = NULL, **tokens = NULL;

	while (isatty(STDIN_FILENO))
	{
		printf("$ ");

		bytesR = getline(&line, &n, stdin);
		if (bytesR == -1) /* errors and EOF */
		{
			free(line);
			freeTokens(tokens);
			line = NULL;
			printf("\n");
			exit(EXIT_FAILURE);
		}
		line[bytesR - 1] = '\0';
		if (*line != '\0')
		{
			tokens = tokenizer(line);
			if (!tokens)
				continue;
			/* print the tokens array */
			for (i = 0; tokens[i]; i++)
				printf("%s\n", tokens[i]);
		}
	}
	freeTokens(tokens);
	free(line);
	line = NULL;
	return (0);
}
