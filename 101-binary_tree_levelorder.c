#include "binary_trees.h"

size_t print_level(binary_tree_t *tree, size_t level, void (*func)(int));

/**
 * binary_tree_levelorder - Function that goes through a binary tree using
 * level-order traversal
 *	- If tree or func is NULL, do nothing
 *
 * @tree: Is a pointer to the root node
 * @func: Is a pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level = 0;

	if (!tree || !func)
		return;

	while (print_level((binary_tree_t *)tree, level, func))
		level++;
}
/**
 * print_level - print level of a binary tree
 *
 * @tree: Pointer to the root node
 * @level: Level to be a printed in full
 * @func: Pointer to a function to call for each node
 *
 * Return: 1 if there is level to print. 0 if levels are over
 */
size_t print_level(binary_tree_t *tree, size_t level, void (*func)(int))
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (level == 0)
	{
		func(tree->n);
		return (1);
	}

	left = print_level(tree->left, level - 1, func);
	right = print_level(tree->right, level - 1, func);

	return  (left || right);
}
