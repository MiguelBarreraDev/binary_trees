#include "binary_trees.h"
#include <limits.h>

int is_bst(const binary_tree_t *node, int min, int max);


/**
 * binary_tree_is_bst - Function that checks if a binary tree
 *	is a valid Binary Search Tree
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: Return 1 if tree is a valid BST, and 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}

/**
 * is_bst - Function that checks is a BST
 *
 * @node: Pointer to the root node of the tree to check.
 * @min: Minimum number of int.
 * @max: Maximum number of int.
 *
 * Return: Return 1 if tree is a valid BST, and 0 otherwise.
 */
int is_bst(const binary_tree_t *node, int min, int max)
{
	/* Base case. An empty tree is a BST. */
	if (node == NULL)
		return (1);
	/* Checking if a key is outside the permitted range. */
	if (node->n < min)
		return (0);
	if (node->n > max)
		return (0);
	/* Sending in updates ranges to the right and left subtree */
	return (is_bst(node->right, node->n, max) &&
		is_bst(node->left, min, node->n));
}
