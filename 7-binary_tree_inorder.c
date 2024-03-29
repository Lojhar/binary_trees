#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through tree using in-order traversal.
 * @tree: Pointer to root node of tree to traverse.
 * @func: Pointer to func to call for each node.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
