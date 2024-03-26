#include "binary_trees.h"


/**
 * recur_delete - Auxilliary function
 *
 * Description: Deletes left and right children of a binary tree
 *
 * @root: pointer to root of tree
 * 
 * Return: Nothing
 */
void recur_delete(binary_tree_t *root)
{
	if (root == NULL)
		return;

	/*recursive calls delete left and right sub-trees */
	recur_delete(root->left);
	recur_delete(root->right);

	/* free malloc'd nodes */
	if (root->left)
	{
		free(root->left);
		root->left = NULL;
	}
	if (root->right)
	{
		free(root->right);
		root->right = NULL;
	}
}

/**
 * binary_tree_delete - Entry Point
 *
 * Description: This is a function that deletes an entire binary tree
 *
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		recur_delete(tree);
		free(tree);
	}

	return;
}
