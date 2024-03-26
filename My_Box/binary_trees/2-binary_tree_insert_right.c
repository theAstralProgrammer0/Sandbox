#include "binary_trees.h"

/**
 * binary_tree_insert_right - Entry Point
 *
 * Description: This function inserts a node as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 *
 * @value: value to store in the new node
 *
 * Return: (binary_tree_t *) pointer to the created node, NULL on failure or if
 * parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (parent->right)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
