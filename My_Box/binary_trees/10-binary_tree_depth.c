#include "binary_trees.h"

/**
 * depth_checker - Auxilliary Funcntion
 *
 * Description: This is a function that recursively counts the tree levels
 *
 * @node: pointer to subject node
 *
 * @depth: pointer to depth of the tree
 *
 * Return: Nothing
 */
void depth_checker(const binary_tree_t *node, size_t *depth, size_t *height)
{
	if (!node)
		return;
	if ((node->left || node->right) && (node->parent))
	{
		(*height)++;
		(*depth
	depth_checker(node->left, depth);
	depth_checker(node->right, depth);
}

/**
 * binary_tree_depth - Entry Point
 *
 * Description: This is a function that measures the depth of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the depth.
 *
 * Return: (size_t) depth of binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	size_t height = 0;

	depth_checker(tree, &depth, &height);
	return (depth);
}
