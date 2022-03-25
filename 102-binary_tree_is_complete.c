#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>

int is_complete(binary_tree_t *tree, size_t index, size_t number_nodes);
size_t size(const binary_tree_t *tree);

/**
 * binary_tree_is_complete - Function that checks if a binary tree is complete
 *	- If tree is NULL, your function must return 0
 *
 * @tree: Pointer to the root node
 *
 * Return: 1 if is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_complete((binary_tree_t *)tree, 0, size(tree)));
}
/**
 * is_complete - Validate if a binary tree is complete
 *
 * @tree: Pointer to the root node
 * @index: Node position in base array
 * @number_nodes: Number of nodes of the binary tree
 * Return: 1 if is complete, 0 otherwise
 */
int is_complete(binary_tree_t *tree, size_t index, size_t number_nodes)
{
	if (!tree)
		return (1);

	if (index >= number_nodes)
		return (0);

	return (
			is_complete(tree->left, 2 * index + 1, number_nodes)
			&&
			is_complete(tree->right, 2 * index + 2, number_nodes)
	       );
}
/**
 * size - function that calculate the number of nodes of a binary tree
 *	- If tree is null, return 0
 *
 * @tree: Pointer to the root node
 *
 * Return: The number of nodes
 */
size_t size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + size(tree->left) + size(tree->right));
}
