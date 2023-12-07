#ifndef LITESHELL_H
#define LITESHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

//Define the alias node structure
typedef struct alias_node
{
	char *name;
	char *value;
	struct alias_node *next;
} alias_node;

//Define the alias list structure
typedef struct alias_t
{
	alias_node *head;
	alias_node *tail;
	size_t size;
} alias_t;
	
alias_t *initAliasList();
int addAlias(alias_t *aliasList, const char *name, const char *value);
alias_node *findAlias(alias_t *aliasList, const char *name);
void removeAlias(alias_t *aliasList, const char *name);
void freeAlias(alias_node *node);
void freeAliasList(alias_t *aliasList);
void freeTokens(char **tokens);
char **tokenize(const char *input_str, const char *delim);
void printAliasList(alias_t *aliasList);
int printAlias(alias_node *, const char *);
int handleAlias(char **arguments);

#endif
