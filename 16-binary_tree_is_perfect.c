#include "binary_trees.h"
/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: pointer to tree
 * Return: 101
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (!binary_tree_is_full(tree))
	{
		return (0);
	}
	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
	{
		return (0);
	}

	return (1);
}

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: pointer to tree
 * Return: return tree is full lft and rr
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}

/**
 * binary_tree_height - check height
 * @tree: pointer to tree
 *
 * Return: right and left height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
