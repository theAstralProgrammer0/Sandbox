#include <stdio.h>
#include <stdlib.h>
#include "alias.h"

/**
  * print_aliases - Entry Point
  *
  * Description: This function prints the contents of the node in a linked
  * list
  *
  * @head: pointer to head node
  *
  * Return: (count) int
  */

int print_aliases(const Alias_t *head)
{
	int count = 0;

	while (head != NULL)
	{
		Alias_t *temp = (Alias_t *)h;

		if (h->key == NULL)
		{
			temp->len = 0;
			temp->str = "(nil)";
		}
		printf("[%d] %s\n", temp->len, temp->str);
		h = h->next;
		count++;
	}
	return (count);
}
