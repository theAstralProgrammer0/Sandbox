#include <stdint.h>
#include <stdio.h>

int main() {
    int value = 42;
    int *ptr = &value;

    // Using uintptr_t to convert a pointer to an integer
    uintptr_t uintptrValue = (uintptr_t)ptr;

    // Printing the uintptr_t value
    printf("Pointer Value: %p\n", ptr);
    printf("uintptr_t Value: %lu\n", uintptrValue);

    return 0;
}
