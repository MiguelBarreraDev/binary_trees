#include "binary_trees.h"
#include <stddef.h>

#define MAX(v1, v2) ((v1 >= v2) ? (v1) : (v2))

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * If tree is NULL, your function must return 0.
 *
 * @tree: Is a pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + MAX(left_height, right_height));
}
