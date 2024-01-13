#include <stdio.h>
#include <stdlib.h>
#include "shell.h"
#include <unistd.h>
int main(void)
{
    char *input = NULL, **arr_str;
    size_t size, bytesR;

    while (1)
    {
        bytesR = getline_v(&input, &size);
        if (bytesR == -1)
        {
            dprintf(STDERR_FILENO, "getline_v failed\n");
            exit(EXIT_FAILURE);
        }

        printf("This is input going into strtow: %s\n", input);

        arr_str = strtow(input);
        if (arr_str == NULL)
        {
            printf("Error from strtow: arr_str = NULL\n");
        }
        else
        {
            char **temp = arr_str;
            while (*temp)
            {
                printf("%s\n", *temp);
                ++temp;
            }

            // Free memory allocated by strtow
            free_str_arr(arr_str);
        }

        // Free memory allocated by getline_v
        free(input);
        input = NULL;
    }

    return (0);
}
