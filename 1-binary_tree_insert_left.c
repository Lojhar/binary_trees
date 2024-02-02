#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as  left-child.
 * @parent: Pointer to node to insert left-child in.
 * @value: Value to store in new node.
 *
 * Return: Pointer to created node, or NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nn;

	if (!parent)
		return (NULL);

	nn = binary_tree_node(parent, value);
	if (!nn)
		return (NULL);

	if (parent->left)
	{
		nn->left = parent->left;
		parent->left->parent = nn;
	}

	parent->left = nn;
	return (nn);
}
