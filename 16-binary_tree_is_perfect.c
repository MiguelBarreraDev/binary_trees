#include "binary_trees.h"
#include <stddef.h>

int equal_height(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: Return 1 if tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_full = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	is_full = binary_tree_is_full(tree);
	if (!is_full)
		return (0);

	return (equal_height(tree->left) && equal_height(tree->right));
}

/**
 * equal_height - Function that measures the height of a binary tree.
 * If tree is NULL, your function must return 0.
 *
 * @tree: Is a pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree.
 */
int equal_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);

	left_height = equal_height(tree->left);
	right_height = equal_height(tree->right);

	if (left_height == right_height)
		return (1);
	else
		return (0);
}
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
