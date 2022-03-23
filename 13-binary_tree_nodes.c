#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that counts the nodes with at
 * least 1 child in a binary tree
 *	- If tree is NULL, the function must return 0
 *	- A NULL pointer is not a node
 *
 * @tree: is a pointer to the root node
 *
 * Return: Number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t value = 0;

	if (!tree)
		return (0);

	value += binary_tree_nodes(tree->left);
	value += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (1 + value);

	return (0);
}
