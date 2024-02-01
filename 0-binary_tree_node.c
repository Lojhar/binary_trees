#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Pointer to parent node.
 * @value: Value to put in new node.
 *
 * returns : pointer to new node or Null.
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nn = malloc(sizeof(binary_tree_t));

	if(!nn)
		return(NULL);
	nn->n = value;
	nn->parent = parent;
	nn->left = NULL;
	nn->right = NULL;
	return(nn);
}
