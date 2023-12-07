#include "liteshell.h"

int handleAlias(char **arguments)
{
	int i = 0;
	char *name, *value;
	alias_t *aliasList = initAliasList();
	alias_node *alias;

	if (!arguments[0])
	{
		printAliasList(aliasList);
		return (0);
	}
	while (arguments[i])
	{
		name = strtok(arguments[i], "=");
		printf("tokenized name is: %s\n", name);
		value = strtok(NULL, "=");
		printf("tokenized value is: %s\n", value);
		if (value == NULL)
		{
			alias = findAlias(aliasList, name);
			return (printAlias(alias, name));
		}
		else
		{
			alias = findAlias(aliasList, name);
			if (alias == NULL)
				return (addAlias(aliasList, name, value));
			free(alias->value);
			alias->value = strdup(value);
		}
		i++;
	}
	return (0);
}
