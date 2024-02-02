#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as right-child.
 * @parent: Pointer to node to insert right-child in.
 * @value: Value to store in  new node.
 *
 * Return: Pointer to created node, or NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nn;

	if (!parent)
		return(NULL);

	nn = binary_tree_node(parent, value);
	if (!nn)
		return(NULL);

	if (parent->right)
	{
		nn->right = parent->right;
		parent->right->parent = nn;
	}
	
	parent->right = nn;
	return (nn);
}
