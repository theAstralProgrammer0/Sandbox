#include "binary_trees.h"

/**
 * post_traverse - Auxilliary Function
 *
 * Description: This function performs post-order traversal of a tree
 *
 * @node: pointer to subject node
 *
 * @func: pointer to a function to call for each node
 *
 * Return: Nothing
 */
void post_traverse(const binary_tree_t *node, void (*func)(int))
{
	if (!node)
		return;

	post_traverse(node->left, func);
	post_traverse(node->right, func);
	func(node->n);
}

/**
 * binary_tree_postorder - Entry Point
 *
 * Description: This is a function that goes through a binary tree using
 * post-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * @func: pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	post_traverse(tree, func);
}
