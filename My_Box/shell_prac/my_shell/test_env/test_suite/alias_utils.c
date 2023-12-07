#include "liteshell.h"

void printAliasList(alias_t *aliasList)
{
        alias_node *currAlias = aliasList->head;

        while (currAlias)
        {
                printf("%s='%s'\n", currAlias->name, currAlias->value);
                currAlias = currAlias->next;
        }
        return;
}

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
