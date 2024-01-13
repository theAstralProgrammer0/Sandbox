#include <stdio.h>
#include <stdlib.h>
#include "shell.h"
void test_getline_strtow() {
    char *line = NULL;
    size_t line_size = 0;
    ssize_t bytesR;

    /** Read lines until the end of input */
    while (1) {
        /** Read a line using getline_v */
        bytesR = getline_v(&line, &line_size);

        /** Check for end of input or error */
        if (bytesRead == -1 || bytesRead == 0) {
            free(line);
            break;
        }

        // Print the original line
        printf("Original Line: %s\n", line);

        // Tokenize the line using strtow
        char **tokens = strtow(line);

        // Print the tokens
        printf("Tokens: ");
        for (int i = 0; tokens[i] != NULL; ++i) {
            printf("%s\n", tokens[i]);
            free(tokens[i]);  // Free each token
        }
        printf("\n");

        free(tokens);  // Free the array of tokens
    }
}

// Main function
int main(void) {
    // Call the test function
    test_getline_strtow();

    return 0;
}
