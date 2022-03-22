#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node as the right-child.
 *	If parent already has a right-child, the new node must take its place,
 *	and the old right-child must be set as the right-child of the new node.
 *
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node
 *
 * Return: Return a pointer to the created node,
 *	or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right = NULL, *old_right = NULL;

	if (!parent)
		return (NULL);

	new_right = binary_tree_node(parent, value);
	if (!new_right)
		return (NULL);

	if (parent->right)
		old_right = parent->right;

	new_right->right = old_right;
	parent->right = new_right;

	if (old_right)
		old_right->parent = new_right;

	return (new_right);
}
