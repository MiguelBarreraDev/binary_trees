#include "binary_trees.h"


/**
 * binary_tree_height - Function that measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of a binary tree de bottom-up.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree->left)
		return (binary_tree_height(tree->left) + 1);
	if (tree->right)
		return (binary_tree_height(tree->right) + 1);
	return (0);
}
