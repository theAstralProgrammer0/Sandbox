#include "binary_trees.h"

/**
 * pre_traverse - Auxilliary Function
 *
 * Description: This function performs pre-order traversal of a tree
 *
 * @node: pointer to subject node
 *
 * @func: pointer to a function to call for each node
 *
 * Return: Nothing
 */
void pre_traverse(const binary_tree_t *node, void (*func)(int))
{
	if (!node)
		return;

	func(node->n);
	pre_traverse(node->left, func);
	pre_traverse(node->right, func);
}

/**
 * binary_tree_preorder - Entry Point
 *
 * Description: This is a function that goes through a binary tree using
 * pre-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * @func: pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	pre_traverse(tree, func);
}
