#include "binary_trees.h"

/**
 * height_checker - Auxilliary Funcntion
 *
 * Description: This is a function that recursively counts the tree levels
 *
 * @node: pointer to subject node
 *
 * @height: pointer to height of the tree
 *
 * Return: Nothing
 */
void height_checker(const binary_tree_t *node, size_t *height)
{
	if (!node)
		return;
	if ((node->left || node->right) && node->parent)
		(*height)++;
	height_checker(node->left, height);
	height_checker(node->right, height);
}

/**
 * binary_tree_height - Entry Point
 *
 * Description: This is a function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: (size_t) height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	height_checker(tree, &height);

	
	return (height);
}
