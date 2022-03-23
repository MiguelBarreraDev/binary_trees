#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the
 * right-child of another node.
 * If parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
 *
 * @parent: Is a pointer to the node to insert the right-child in.
 * @value: Is the value to store in the new node.
 *
 * Return: A pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (!parent)
		return (NULL);

	/* Create right node */
	right_node = malloc(sizeof(binary_tree_t));
	if (!right_node)
		return (NULL);
	*right_node = (binary_tree_t){value, parent, NULL, NULL};

	/* Insert right node */
	if (parent->right)
	{
		right_node->right = parent->right;
		right_node->right->parent = right_node;
	}
	parent->right = right_node;

	return (right_node);
}
