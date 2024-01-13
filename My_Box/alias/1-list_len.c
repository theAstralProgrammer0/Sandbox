#include <stdio.h>
#include "lists.h"

/**
  * list_len - Entry Point
  *
  * Description: This function finds the number of nodes in a linked list
  *
  * @h: head that points to the head node of linked list
  *
  * Return: (count) int
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	list_t *temp = (list_t *) h;

	while (h != NULL)
	{
		if (temp != NULL)
		{
			temp = temp->next;
			count++;
		}
		else
			break;
	}
	return (count);
}
