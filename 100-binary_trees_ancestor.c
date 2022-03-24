#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree);


/**
 * binary_trees_ancestor - Function that finds the lowest common
 *	ancestor of two nodes.
 *
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Return a pointer to the lowest common ancestor node
 *	of the two given nodes.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	binary_tree_t *ancestor = NULL;

	if (!first || !second)
		return (NULL);

	if (first == second)
	{
		ancestor = (binary_tree_t *)first;
		return (ancestor);
	}

	if (binary_tree_depth(first) > binary_tree_depth(second))
		return (binary_trees_ancestor(first->parent, second));

	if (binary_tree_depth(first) < binary_tree_depth(second))
		return (binary_trees_ancestor(first, second->parent));

	return (binary_trees_ancestor(first->parent, second->parent));
}

/**
 * binary_tree_depth - Function that measures the depth of a node
 * in a binary tree.
 * If tree is NULL, your function must return 0.
 *
 * @tree: Is a pointer to the node to measure the depth.
 *
 * Return: Depth of a node in the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (
			!tree || !tree->parent ?
			0
			:
			1 + binary_tree_depth(tree->parent)
		);
}
