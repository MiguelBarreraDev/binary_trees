#include "binary_trees.h"
/**
 * binary_tree_balance - Function that measures the balance
 * factor of a binary tree
 *	- If tree is NULL, return 0
 *
 * @tree: Is a pointer to the root node
 *
 * Return: The balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
		balance_factor = 2;
	else
	{
		if (!(tree->left) && !(tree->right))
			balance_factor = 0;
		else
			balance_factor = -1;
	}

	return (balance_factor);
}
