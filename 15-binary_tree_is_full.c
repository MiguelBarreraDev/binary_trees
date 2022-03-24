#include "binary_trees.h"
/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 *	- If tree is NULL, your function must return 0
 *
 * @tree: Is a pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full. 0 if not is full tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int p = 0, q = 0;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	if (tree->left && tree->right)
	{
		p = binary_tree_is_full(tree->left);
		q = binary_tree_is_full(tree->right);

		return (p && q);
	}
	return (0);
}
