#include "binary_trees.h"
/**
 * binary_tree_uncle - find uncle of node
 * @node: pointer to node
 * Return: left and right node status
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (!node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
