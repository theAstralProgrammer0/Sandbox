#ifndef ALIAS_H
#define ALIAS_H

/**
 * struct list_s - singly linked list
 * @key: retrieved key from 
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct Alias_t 
{
	char *key;
	char *value;
	struct Alias_t *next;
} Alias_t;

Alias_t *add_node(list_t **, const char *);
//int print_list(const list_t *);
//size_t list_len(const list_t *);
//list_t *add_node_end(list_t **, const char *);
//void free_list(list_t *);

#endif
