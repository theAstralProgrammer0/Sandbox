#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "alias.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    Alias_t *head;

    head = NULL;
    add_alias(&head, "memchk", "valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s");
    add_alias(&head, "la", "ls -A");
    add_alias(&head, "gph", "git push");
    add_alias(&head, "gb", "git branch" );
    add_alias(&head, "pp", "prepend");
    print_list(head);
    return (0);
}
