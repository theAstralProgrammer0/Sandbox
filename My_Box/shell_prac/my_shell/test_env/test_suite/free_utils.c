#include <stdlib.h>
#include <stddef.h>
#include "liteshell.h"

void freeAlias(alias_node *node)
{
	free(node->name);
	free(node->value);
	free(node);
	node = NULL;
}


void freeAliasList(alias_t *aliasList)
{
	alias_node *currAlias;
	alias_node *nextAlias;

	currAlias = aliasList->head;

	while (currAlias)
	{
		nextAlias = currAlias->next;
		freeAlias(currAlias);
		currAlias = nextAlias;
	}
	free(aliasList);
}


void freeTokens(char **tokens) 
{
	for (int i = 0; tokens[i] != NULL; ++i) 
	{
		free(tokens[i]);
	}
	free(tokens);
}
