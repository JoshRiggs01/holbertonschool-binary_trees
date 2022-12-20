#include "binary_trees.h"
/**
 * binary_tree_size - measures size of binary tree
 * @tree: pointer to tree
 *
 * Return: size of the tree being calculated as total number of nodes in tre
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
