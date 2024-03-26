#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

/** Auxilliary Functions **/
void recur_delete(binary_tree_t *root);
/* binary tree printer*/
void binary_tree_print(const binary_tree_t *);
/* binary tree pre-order traversal recursor */
void pre_traverse(const binary_tree_t *node, void (*func)(int));
/* binary tree in-order traversal recursor */
void in_traverse(const binary_tree_t *node, void (*func)(int));
/* binary tree post-order traversal recursor */
void post_traverse(const binary_tree_t *node, void (*func)(int));
/* height checker */
size_t height_checker(const binary_tree_t *node);
/* depth checker */
void depth_checker(const binary_tree_t *node, size_t *depth);

/** Core Functions **/
/* binary tree node creator */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* binary tree left node insertor */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* binary tree right node insertor */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* binary tree deleter */
void binary_tree_delete(binary_tree_t *tree);
/* is_leaf checker */
int binary_tree_is_leaf(const binary_tree_t *node);
/* is_root checker */
int binary_tree_is_root(const binary_tree_t *node);
/* binary tree pre-order traverser */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/* binary tree in-order traverser */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* binary tree post-order traverser */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/* height calculator */
size_t binary_tree_height(const binary_tree_t *tree);
/* depth calculator */
size_t binary_tree_depth(const binary_tree_t *tree);
#endif /* _BINARY_TREES_H_ */
