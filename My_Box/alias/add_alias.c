#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alias.h"

/**
  * add_alias_end - Entry Point
  * Description: This function adds an alias node to the 
  * end of alias linked list
  * @head: Pointer to head pointer
  * @key: key entry for alias linked list node
  * @value: value entry for alias linked list node
  * Return: (newnode) pointer to last created node
  */

Alias_t *add_alias_end(list_t **head, const char *key, const char *value)
{
	Alias_t *newnode;
	Alias_t *temp = *head;

	newnode = (Alias_t *) malloc(sizeof(Alias_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}
