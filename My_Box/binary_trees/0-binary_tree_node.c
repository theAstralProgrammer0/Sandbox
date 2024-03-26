#include "binary_trees.h"

/**
 * binary_tree_node - Entry Point
 *
 * Description: This function creates a binary tree node
 *
 * @parent: pointer to the parent of the node
 *
 * @value: n member of the node
 *
 * Return: (binary_tree_t *) pointer to the node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->n = value;

	return (newnode);
}
