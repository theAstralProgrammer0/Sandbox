#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Entry Point
 *
 * Description: This is a function that checks if a node is a leaf
 *
 * @node: pointer to subject node
 *
 * Return: (int) 1 if True, 0 if False
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}
