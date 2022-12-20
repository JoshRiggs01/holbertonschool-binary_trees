#include "binary_trees.h"
/**
 * binary_tree_inorder - inorder traveral of binary tree
 * @tree: pointer to funtion that will be called on each node
 * @func: stores value of current node
 * Return: NULL
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
