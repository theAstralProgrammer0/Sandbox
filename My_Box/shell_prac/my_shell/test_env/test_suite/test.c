#include "liteshell.h"

int main(void)
{
	//Initialize the alias list
	alias_t* aliasList;
	alias_node *alias;
	
	aliasList = initAliasList();
	printAliasList(aliasList);
	printf("//////////////////////////////////////////////////////////\n");
	addAlias(aliasList, "pot", "patrick='plotting'=planning");
	printAlias(aliasList, "pot");
	printf("//////////////////////////////////////////////////////////\n");
	addAlias(aliasList, "pant", "panties plaque -plan");
	addAlias(aliasList, "pos", "krabby='patty' -naruto");
	addAlias(aliasList, "pan", "crocs=meruem '-'sasuke");
	printAliasList(aliasList);
	printf("//////////////////////////////////////////////////////////\n");
	removeAlias(aliasList, "pant");
	alias = findAlias(aliasList, "pos");

	printAliasList(aliasList);
	















/**	const char input[] = "  Hello  World ;  This is a test  ";
	char *str = "		alias pot=pligth panties ";
	char **str_arr = tokenize(str, "=");
	char **tokens = tokenize(input, " \t;");

	// Add aliases
	addAlias(aliasList, "ll", "ls=p -l");
	addAlias(aliasList, "g", "git status");

	// Find and use aliases
	alias_node* alias = findAlias(aliasList, "g");
	if (alias != NULL)
	{
		// Execute the command with the alias value
		system(alias->value);
	}

	// Remove an alias
	unAlias(aliasList, "g");

	// Free the memory when done
	freeAliasList(aliasList);

	while (*str_arr)
	{
		printf("%s\n", *str_arr);
		++str_arr;
	}

	if (tokens != NULL)
	{
		for (int i = 0; tokens[i] != NULL; ++i)
		{
			printf("%s\n", tokens[i]);
		}
		freeTokens(tokens);
	}*/
	return 0;
}
