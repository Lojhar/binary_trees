#include <stdio.h>
#include "binary_trees.h"

/**
 * print_tree - Helper function to print binary tree recursively
 * @tree: Pointer to root node of tree
 * @depth: Current depth in tree
 */

void print_tree(const binary_tree_t *tree, size_t depth)
{
	 if (tree != NULL)
	 {
		  print_tree(tree->right, depth + 1);
		  for (size_t x = 0; x < depth; x++)
			  printf("    ");
		  printf("(%d)\n", tree->n);

		  print_tree(tree->left, depth + 1);
	 }
}

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to root node of tree
 */
{
	if (tree != NULL)
		print_tree(tree, 0);
}

/**
 * free_tree - Helper func to free memory
 * @tree: Pointer to root node of tree
 */
void free_tree(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		free_tree(tree->left);
		free_tree(tree->right);
		free(tree)
	}
}


/**
 * binary_tree_free - Free the  memory of binary tree
 * @tree: Pointer to root node of tree
 */
{
	if (tree != NULL)
		free_tree(tree);
}
