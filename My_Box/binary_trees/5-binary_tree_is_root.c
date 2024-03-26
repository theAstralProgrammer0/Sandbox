#include "binary_trees.h"

/**
 * binary_tree_is_root - Entry Point
 *
 * Description: This is a function that checks if a node is the root
 *
 * @node: pointer to subject node
 *
 * Return: (int) 1 if True, 0 if False
 */ 

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !(node->parent))
		return (1);
	return (0);
}
