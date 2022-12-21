#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at least one child
 * @tree: pointer to tree
 *
 * Return: returns the count of nodes with one child in the binary
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
