#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of node in tree.
 * @tree: Pointer to node to measure depth.
 *
 * Return: The depth of node, 0 if NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;
	if (tree == NULL)
		return(0);

	while (tree->parent != NULL)
	{
		d++;
		tree = tree->parent;
	}
	return(d);
}
