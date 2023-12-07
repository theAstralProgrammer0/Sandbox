#include "liteshell.h"

char** tokenize(const char* input_str, const char* delim) {
    char** tokens = NULL;
    size_t tokens_size = 0;
    size_t tokens_count = 0;

    char* input_copy = strdup(input_str);
    if (input_copy == NULL) {
        // Handle memory allocation error
        return NULL;
    }

    char* token = strtok(input_copy, delim);
    while (token != NULL) {
        // Allocate memory for the token
        char* token_copy = strdup(token);
        if (token_copy == NULL) {
            // Handle memory allocation error
            free(input_copy);
            for (size_t i = 0; i < tokens_count; ++i) {
                free(tokens[i]);
            }
            free(tokens);
            return NULL;
        }

        // Resize the tokens array if necessary
        if (tokens_count >= tokens_size) {
            tokens_size += 10;  // Arbitrary resize increment
            tokens = realloc(tokens, tokens_size * sizeof(char*));
            if (tokens == NULL) {
                // Handle memory reallocation error
                free(token_copy);
                free(input_copy);
                for (size_t i = 0; i < tokens_count; ++i) {
                    free(tokens[i]);
                }
                free(tokens);
                return NULL;
            }
        }

        // Add the token to the array
        tokens[tokens_count++] = token_copy;

        // Get the next token
        token = strtok(NULL, delim);
    }

    // Add a NULL terminator to the tokens array
    if (tokens_count >= tokens_size) {
        tokens = realloc(tokens, (tokens_size + 1) * sizeof(char*));
        if (tokens == NULL) {
            // Handle memory reallocation error
            free(input_copy);
            for (size_t i = 0; i < tokens_count; ++i) {
                free(tokens[i]);
            }
            free(tokens);
            return NULL;
        }
    }
    tokens[tokens_count] = NULL;

    // Free the duplicated input string
    free(input_copy);

    return tokens;
}
