#include "binary_trees.h"

/**
 * binary_tree_sibling - chekc if node is sibling
 * @node: pointer to node
 *
 * Return: right nd left node status
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
