#include "binary_trees.h"


/**
 * binary_tree_inorder - Function that goes through a binary
 *	tree using in-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *	The value in the node must be passed as a parameter to this function.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* INFO! The left subtree is first, then the root, later the right sub-tree */

	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);

	/* Print (n) of the node */
	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
