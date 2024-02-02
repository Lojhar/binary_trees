#include "binary_trees.h"

/**
 * binary_tree_height - Measures height of tree.
 * @tree: Pointer to root node of tree to measure height.
 *
 * Return: The height of tree, 0 if NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;
	if (tree == NULL)
		return(0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return(lh > rh ? lh + 1 : rh + 1);
}
