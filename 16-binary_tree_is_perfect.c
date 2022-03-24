#include "binary_trees.h"
#include <stddef.h>

#define MAX(v1, v2) ((v1 >= v2) ? (v1) : (v2))

size_t height(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
int pow_recursion(int x, int y);

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: Return 1 if tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_tree = 0, n_leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	h_tree = height(tree);
	n_leaves = binary_tree_leaves(tree);
	return (pow_recursion(2, h_tree) == n_leaves);
}

/**
 * height - Function that measures the height of a binary tree.
 * If tree is NULL, your function must return 0.
 *
 * @tree: Is a pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree.
 */
size_t height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (1 + MAX(left_height, right_height));
}

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *	- If tree is NULL, the function must return 0
 *	- A NULL pointer is not a leaf
 *
 * @tree: Is a pointer to the root node
 *
 * Return: Number of the leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* If node is NULL */
	if (!tree)
		return (0);

	/* If the node is Leaf */
	if (!(tree->left) && !(tree->right))
		return (1);

	return (
			binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right)
		);
}

/**
 * pow_recursion - x raised to the power of y
 * @x: base
 * @y: exponente
 * Return: potencia
 */
int pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * pow_recursion(x, (y - 1)));
}
