#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node.
 * When created, a node does not have any child.
 *
 * @parent: Is a pointer to the parent node of the node to create.
 * @value: Is the value to put in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	*node = (binary_tree_t){value, parent, NULL, NULL};

	return (node);
}
