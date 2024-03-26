#include "binary_trees.h"

/**
 * in_traverse - Auxilliary Function
 *
 * Description: This function performs in-order traversal of a tree
 *
 * @node: pointer to subject node
 *
 * @func: pointer to a function to call for each node
 *
 * Return: Nothing
 */
void in_traverse(const binary_tree_t *node, void (*func)(int))
{
	if (!node)
		return;

	in_traverse(node->left, func);
	func(node->n);
	in_traverse(node->right, func);
}

/**
 * binary_tree_inorder - Entry Point
 *
 * Description: This is a function that goes through a binary tree using
 * in-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * @func: pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	in_traverse(tree, func);
}
