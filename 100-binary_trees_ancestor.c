#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the low common ancestor of two nodes.
 * @first: Pointed to the first node.
 * @second: Pointed to the second node.
 *
 * Return: pointed to the lowest common ancestor node,
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *tf = first, *ts = second;
	size_t df = 0, ds = 0;
	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	
	while (tf->parent != NULL)
	{
		tf = tf->parent;
		df++;
	}
	while (ts->parent != NULL)
	{
		ts = ts->parent;
		ds++;
	}
	
	tf = first;
	ts = second;

	while (df > ds)
	{
		tf = tf->parent;
		df--;
	}
	while (ds > df)
	{
		ts = ts->parent;
		ds--;
	}

	while (tf != ts && tf != NULL && ts != NULL)
	{
		tf = tf->parent;
		ts = ts->parent;
	}

	return ((binary_tree_t *)tf);
}
