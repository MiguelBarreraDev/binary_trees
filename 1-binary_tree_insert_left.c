#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function that inserts a node as the left-child.
 *	If parent already has a left-child, the new node must take its place,
 *	and the old left-child must be set as the left-child of the new node.
 *
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node
 *
 * Return: Return a pointer to the created node,
 *	or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left = NULL, *old_left = NULL;

	if (!parent)
		return (NULL);

	new_left = binary_tree_node(parent, value);
	if (!new_left)
		return (NULL);

	if (parent->left)
		old_left = parent->left;

	new_left->left = old_left;
	parent->left = new_left;

	if (old_left)
		old_left->parent = new_left;

	return (new_left);
}
