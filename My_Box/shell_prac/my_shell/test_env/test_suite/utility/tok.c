#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

char **tokenizeAliasArguments(char *argument)
{
    // Allocate an array to store the tokens
    char **tokens = (char **)malloc(sizeof(char *) * 2);
    if (!tokens)
    {
        dprintf(2, "Failed to allocate memory for tokens\n");
        exit(EXIT_FAILURE);
    }

    // Initialize tokens
    tokens[0] = NULL;
    tokens[1] = NULL;

    // Tokenize the argument based on the equal sign
    char *token = strtok(argument, "=");
    if (token)
    {
        // Save the first token as the name
        tokens[0] = strdup(token);

        // Tokenize the remaining string after the first equal sign
        token = strtok(NULL, "");
        if (token)
        {
            // Handle situations where a single quote exists
            char *singleQuote = strchr(token, '\'');
            if (singleQuote)
            {
                // Ignore the single quote by replacing it with a null terminator
                *singleQuote = '\0';
            }

            // Save the remaining string after the first equal sign as the value
            tokens[1] = strdup(token);
        }
    }

    return tokens;
}

int main(void)
{
	char **aliasTokens;

	aliasTokens = tokenizeAliasArguments("ll=liteshell");
	aliasTokens[2] = NULL;

	for (int i = 0; aliasTokens[i]; ++i)
	{
		printf("%s\n", aliasTokens[i]);
	}
	return (0);
}

