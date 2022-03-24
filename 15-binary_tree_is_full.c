#include "binary_trees.h"


/**
 * binary_tree_is_full - Function that checks if a binary tree is full.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: Return 1 if tree is full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int a = 0, b = 0;
	/* Verification of the initial node is null*/
	if (!tree)
		return (0);

	/* Verification of the node is leave */
	if (!tree->left && !tree->right)
		return (1);

	/* Use Logical Operators */
	if (tree->left && tree->right)
	{
		a = binary_tree_is_full(tree->left);
		b = binary_tree_is_full(tree->right);
		return (a && b);
	}
	return (0);
}
