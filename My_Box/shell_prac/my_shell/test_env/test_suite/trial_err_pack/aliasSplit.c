#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void splitString(const char *inputString, char ***resultArray, int *numParts) {
    *numParts = 0;
    char *currentPart = NULL;
    int insideQuotes = 0;
    int charIndex = 0;
    int resultIndex = 0;

    for (int i = 0; inputString[i] != '\0'; ++i) {
        if (inputString[i] == '\'') {
            insideQuotes = !insideQuotes;
            if (currentPart == NULL) {
                currentPart = malloc(2); // Allocate memory for the current part
            }
            currentPart[charIndex] = inputString[i];
            charIndex++;
        } else if (inputString[i] == '=' && !insideQuotes) {
            // Found the first equal sign outside quotes
            if (currentPart == NULL) {
                currentPart = malloc(1); // Allocate memory for the current part
            }
            currentPart[charIndex] = '\0'; // Null-terminate the current part
            *resultArray[resultIndex] = strdup(currentPart);
            free(currentPart);
            currentPart = NULL;
            charIndex = 0;
            resultIndex++;
            (*numParts)++;
        } else {
            // Append character to currentPart
            if (currentPart == NULL) {
                currentPart = malloc(2); // Allocate memory for the current part
            }
            currentPart[charIndex] = inputString[i];
            charIndex++;
        }
    }

    // Process the last part after the last equal sign
    if (currentPart == NULL) {
        currentPart = malloc(1); // Allocate memory for the current part
    }
    currentPart[charIndex] = '\0';
    *resultArray[resultIndex] = strdup(currentPart);
    free(currentPart);
    (*numParts)++;
}

int main() {
    const char *inputString = "pot=lace=polland=plaque=place";
    char **resultArray = malloc(sizeof(char *) * 2); // Assuming there are two parts
    int numParts = 0;

    splitString(inputString, &resultArray, &numParts);

    // Print the result
    for (int i = 0; i < numParts; ++i) {
        printf("Part %d: %s\n", i + 1, resultArray[i]);
    }

    // Free allocated memory
    for (int i = 0; i < numParts; ++i) {
        free(resultArray[i]);
    }
    free(resultArray);

    return 0;
}
