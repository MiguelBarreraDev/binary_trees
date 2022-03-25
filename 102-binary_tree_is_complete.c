#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree);
int check_complete(const binary_tree_t *root, int index, int number_nodes);


/**
 * binary_tree_is_complete - Function that checks if a binary tree is complete.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: Return 1 if tree is complete, otherwise 0.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t number_nodes;

	if (tree == NULL)
		return (0);

	number_nodes = binary_tree_size(tree);

	return (check_complete(tree, 0, number_nodes));
}

/**
 * check_complete - Sub-Function that checks if a binary tree is complete.
 *
 * @root: Pointer to the root node
 * @index: The index of the node.
 * @number_nodes: Number of nodes.
 *
 * Return: Return 1 if tree is complete, otherwise 0.
 */
int check_complete(const binary_tree_t *root, int index, int number_nodes)
{
	if (root == NULL)
		return (1);

	if (index >= number_nodes)
		return (0);

	return (check_complete(root->left, (2 * index) + 1, number_nodes) &&
		check_complete(root->right, (2 * index) + 2, number_nodes));
}

/**
 * binary_tree_size - Function that measures the size of a binary tree.
 * If tree is NULL, the function must return 0.
 *
 * @tree: Is a pointer to the root node of the tree to measure the size.
 *
 * Return: Size of binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (
			1 +
			binary_tree_size(tree->left) +
			binary_tree_size(tree->right)
		);
}
