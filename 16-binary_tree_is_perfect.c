#include "binary_trees.h"
#include <stddef.h>

#define MAX(v1, v2) ((v1 >= v2) ? (v1) : (v2))

size_t height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: Return 1 if tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lg = 0, rg = 0;

	if (!tree)
		return (0);

	if (tree->left)
		lg = 1 + height(tree->left);

	if (tree->right)
		rg = 1 + height(tree->right);

	return (lg == rg);
}

/**
 * height - Function that measures the height of a binary tree.
 * If tree is NULL, your function must return 0.
 *
 * @tree: Is a pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree.
 */
size_t height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (1 + MAX(left_height, right_height));
}
