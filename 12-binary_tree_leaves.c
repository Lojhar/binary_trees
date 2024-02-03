#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts  leaves in a tree.
 * @tree: Pointer to  rootnode of the tree to count leaves.
 *
 * Return: The number of leaves in tree, 0 if NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return(1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);)
}
