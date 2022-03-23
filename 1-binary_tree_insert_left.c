#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node.
 * If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node.
 *
 * @parent: Is a pointer to the node to insert the left-child in.
 * @value: Is the value to store in the new node.
 *
 * Return: A pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if (!parent)
		return (NULL);

	/* Create left node */
	left_node = malloc(sizeof(binary_tree_t));
	if (!left_node)
		return (NULL);
	*left_node = (binary_tree_t){value, parent, NULL, NULL};

	/* Insert left node */
	if (parent->left)
	{
		left_node->left = parent->left;
		left_node->left->parent = left_node;
	}
	parent->left = left_node;

	return (left_node);
}
