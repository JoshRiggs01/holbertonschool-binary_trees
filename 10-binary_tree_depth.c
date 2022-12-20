#include "binary_trees.h"
/**
 * binary_tree_depth - function tot measure depth of node
 * @tree: pointer to tree
 *
 * Return: number of edges on the path fro the root to the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}

	return (binary_tree_depth(tree->parent) + 1);
}
