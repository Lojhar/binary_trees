#include "binary_trees.h"

/**
 * binary_tree_is_root is function to checks if a node is a root of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return 1 if the node is roo,t otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return(0);

	return (node->parent == NULL);
}
