#include "liteshell.h"

alias_t *initAliasList()
{
	alias_t *aliasList;
	
	aliasList = (alias_t *) malloc(sizeof(alias_t));
	if (aliasList == NULL)
		return (NULL);

	aliasList->head = NULL;
	aliasList->tail = NULL;
	aliasList->size = 0;
	return (aliasList);
}

int addAlias(alias_t *aliasList, const char *name, const char *value)
{
	alias_node *newAlias;

	newAlias = (alias_node *) malloc(sizeof(alias_node));
	if (newAlias == NULL)
	{
		dprintf(2, "Failed to malloc\n");
		return (1);
	}

	newAlias->name = strdup(name);
	newAlias->value = strdup(value);
	newAlias->next = NULL;

	if (aliasList->head == NULL)
	{
		aliasList->head = newAlias;
		aliasList->tail = newAlias;
	}
	else
	{
		aliasList->tail->next = newAlias;
		aliasList->tail = newAlias;
	}
	aliasList->size++;
	return (0);
}


alias_node *findAlias(alias_t *aliasList, const char *name)
{
	alias_node *currAlias = aliasList->head;

	while (currAlias)
	{
		if (strcmp(currAlias->name, name) == 0)
			return (currAlias);
		currAlias = currAlias->next;
	}
	return (NULL);
}


int printAlias(alias_node *alias, const char *name)
{
	if (!alias)
	{
		printf("alias: %s not found\n", name);
		return (1);
	}
	printf("%s='%s'\n", alias->name, alias->value);
	return (0);
}


void removeAlias(alias_t *aliasList, const char *name)
{
	alias_node *currAlias = aliasList->head;
	alias_node *prevAlias = NULL;

	while (currAlias)
	{
		if (strcmp(currAlias->name, name) == 0)
		{
			if (prevAlias == NULL)
				aliasList->head = currAlias->next;
			else
				prevAlias->next = currAlias->next;

			freeAlias(currAlias);
			aliasList->size--;
		}
		prevAlias = currAlias;
		currAlias = currAlias->next;
	}
}
