#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *input = NULL;
    size_t n = 0;
    ssize_t charsRead;
    FILE *fp;

    fp = fopen("file", "r");

    if (fp == NULL)
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    while (1)
    {
        printf("$ ");
        charsRead = getline(&input, &n, fp);

        if (charsRead == -1)
        {
            // Check if it's the end of the file
            if (feof(fp))
            {
                printf("End of file\n");
                break;
            }

            // Handle other errors
            perror("Error reading line");
            free(input);
            exit(EXIT_FAILURE);
        }

        printf("%s", input);
    }

    free(input);
    fclose(fp);
    return 0;
}

