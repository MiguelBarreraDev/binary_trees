#include "binary_trees.h"


/**
 * binary_tree_postorder - Function that goes through a binary
 *	tree using post-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *	The value in the node must be passed as a parameter to this function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* INFO! Traverse the left subtree, the right subtree and the root node. */

	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	/* Print (n) of the node */
	func(tree->n);
}
