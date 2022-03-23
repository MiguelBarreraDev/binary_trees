#include "binary_trees.h"
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
