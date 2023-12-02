#include <unistd.h>
#include <stdlib.h>

ssize_t custom_getline(char **lineptr, size_t *n)
{
    ssize_t bytesRead;
    size_t size = 0;
    char *buffer = NULL;
    char ch;

    while (1)
    {
        bytesRead = read(STDIN_FILENO, &ch, 1);

        if (bytesRead == -1)
        {
            // Error reading
            free(buffer);
            return -1;
        }

        if (bytesRead == 0 || ch == '\n')
        {
            // End of input or end of line
            if (size == 0)
            {
                // No input received
                free(buffer);
                return -1;
            }
            else
            {
                // End of line reached
                break;
            }
        }

        // Append character to the buffer
        if (size == 0)
        {
            // Allocate initial buffer
            buffer = (char *)malloc(1);
        }
        else
        {
            // Reallocate buffer to accommodate new character
            buffer = (char *)realloc(buffer, size + 1);
        }

        if (buffer == NULL)
        {
            // Memory allocation error
            perror("Memory allocation error");
            exit(EXIT_FAILURE);
        }

        buffer[size++] = ch;
    }

    // Null-terminate the string
    buffer = (char *)realloc(buffer, size + 1);
    if (buffer == NULL)
    {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }
    buffer[size] = '\0';

    // Update lineptr and n
    *lineptr = buffer;
    *n = size;

    return size;
}

int main(void)
{
    char *input = NULL;
    size_t n = 0;
    ssize_t charsRead;

    printf("Enter a line: ");
    charsRead = custom_getline(&input, &n);

    if (charsRead != -1)
    {
        printf("You entered: %s", input);
    }
    else
    {
        perror("Error reading line");
    }

    free(input);
    return 0;
}

