#include "binary_trees.h"


/**
 * binary_tree_depth - Function that measures
 *	the depth of a node in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The depth of a binary tree de bottom-up.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	return (0);
}
