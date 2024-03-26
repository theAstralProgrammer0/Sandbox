#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry Point
 *
 * Description: This function inserts a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 *
 * @value: value to store in the new node
 *
 * Return: (binary_tree_t *) pointer to the created node, NULL on failure or if
 * parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	newnode = binary_tree_node(parent, value);
	
	if (parent == NULL)
		return (NULL);

	if (parent->left)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
