#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alias.h"

/**
  * add_node - Entry Point
  * Description: This function adds a node to the end of linked list
  * @head: Pointer to head pointer
  * @key: Alias key to be assigned a value
  * @value: Alias value assigned to a key
  * Return: (newnode) pointer to Alias_t linked list
  */

Alias_t *add_node(Alias_t **head, const char *key, const char *value)
{
	Alias_t *newnode;

	newnode = (Alias_t *) malloc(sizeof(Alias_t));

	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	*head = newnode;

	return (newnode);
}
