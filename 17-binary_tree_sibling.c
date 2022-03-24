#include "binary_trees.h"


/**
 * binary_tree_sibling - Function that finds the sibling of a node.
 *
 * @node: Pointer to the node to find the sibling.
 * Return: Return a pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	parent = node->parent;
	if (!node || !parent)
		return (NULL);

	if (parent->right != node)
		return (parent->right);
	else
		return (parent->left);
}
