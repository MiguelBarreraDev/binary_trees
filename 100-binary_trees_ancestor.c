#include "binary_trees.h"
#include <stddef.h>

size_t depth(const binary_tree_t *tree);

/**
 * binary_trees_ancestor - function that finds the lowest common
 * ancestor of two nodes
 *	- If no common ancestor was found,your function
 *	must return NULL
 *
 * @first: Pointer to the first node
 * @second:Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node of
 * the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	size_t first_depth = 0, second_depth = 0;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	first_depth = depth(first);
	second_depth = depth(second);

	if (first_depth == second_depth)
	{
		first = first->parent;
		second = second->parent;
	}
	else if (first_depth > second_depth)
		first = first->parent;
	else
		second = second->parent;

	return (binary_trees_ancestor(first, second));
}

/**
 * depth - Function that measures the depth of a node
 * in a binary tree.
 * If tree is NULL, your function must return 0.
 *
 * @tree: Is a pointer to the node to measure the depth.
 *
 * Return: Depth of a node in the binary tree
 */
size_t depth(const binary_tree_t *tree)
{
	return (
			!tree || !tree->parent ?
			0
			:
			1 + depth(tree->parent)
		);
}
