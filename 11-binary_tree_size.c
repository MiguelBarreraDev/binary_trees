#include "binary_trees.h"
/**
 * binary_tree_size - Function that measures the size of a binary tree.
 * If tree is NULL, the function must return 0.
 *
 * @tree: Is a pointer to the root node of the tree to measure the size.
 *
 * Return: Size of binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (
			1 +
			binary_tree_size(tree->left) +
			binary_tree_size(tree->right)
		);
}
