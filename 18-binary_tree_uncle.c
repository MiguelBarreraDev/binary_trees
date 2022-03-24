#include "binary_trees.h"


/**
 * binary_tree_uncle - Function that finds the uncle of a node.
 *
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Return a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *father = NULL, *grand_father = NULL;

	if (!node || !node->parent)
		return (NULL);

	/* Get sibling of his father */
	father = node->parent;

	if (!father || !father->parent)
		return (NULL);

	grand_father = father->parent;
	if (grand_father->right != father)
		return (grand_father->right);
	else
		return (grand_father->left);
}
