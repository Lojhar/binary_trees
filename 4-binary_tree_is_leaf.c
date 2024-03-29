#include "binary_trees.h"

/**
 * binary_tree_is_leaf is functin to checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return 1 if the node is a leaf Otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node != NULL && node->left == NULL && node->right == NULL);
}
