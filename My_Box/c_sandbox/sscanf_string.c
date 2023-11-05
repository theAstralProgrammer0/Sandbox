#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int len;
    char *str;
    char *str2;

    str = (char *)malloc(100);

    printf("Enter a string: ");
    scanf("%s", str);

    str2 = (char *)realloc(str, (strlen(str) + 1) * sizeof(char));

    if (str2 != NULL) {
        len = strlen(str2);
        printf("Length of string is: %d", len);
    } else {
        printf("Memory reallocation failed.");
    }

    return 0;
}
