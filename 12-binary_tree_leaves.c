#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *	- If tree is NULL, the function must return 0
 *	- A NULL pointer is not a leaf
 *
 * @tree: Is a pointer to the root node
 *
 * Return: Number of the leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* If node is NULL */
	if (!tree)
		return (0);

	/* If the node is Leaf */
	if (!(tree->left) && !(tree->right))
		return (1);

	return (
			binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right)
		);
}
