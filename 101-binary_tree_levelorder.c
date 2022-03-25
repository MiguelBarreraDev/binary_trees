#include "binary_trees.h"
#include <stddef.h>

#define MAX(v1, v2) ((v1 >= v2) ? (v1) : (v2))

size_t binary_tree_height(const binary_tree_t *tree);
void print_this_level(const binary_tree_t *root, int level, void (*func)(int));


/**
 * binary_tree_levelorder - Function that goes through a binary
 *	tree using level-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node.
 *	The value in the node must be passed as a parameter to this function.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (!tree || !func)
		return;

	height = 1 + binary_tree_height(tree);

	for (i = 1; i <= height; i++)
		print_this_level(tree, i, func);
}

/**
 * print_this_level - Print node at the current level
 *
 * @root: Pointer to the root node.
 * @level: Level of the node.
 * @func: Pointer to a function to call for each node.
 *	The value in the node must be passed as a parameter to this function.
 */
void print_this_level(const binary_tree_t *root, int level, void (*func)(int))
{
	if (level == 1)
	{
		func(root->n);
	}
	else
	{
		print_this_level(root->left, level - 1, func);
		print_this_level(root->right, level - 1, func);
	}
}

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
