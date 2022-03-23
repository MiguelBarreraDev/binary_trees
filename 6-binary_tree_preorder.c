#include "binary_trees.h"
/**
 * binary_tree_preorder- Function that goes through a
 *	binary tree using pre-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *	The value in the node must be passed as a parameter to this function.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* INFO! The root node is first, then the left and the right subtree. */

	if (!tree || !func)
		return;

	/* Print (n) of the Node */
	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
