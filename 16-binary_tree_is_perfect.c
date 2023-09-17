#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: ptr
 * Return: if tree is NULL 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left == right)
	{
		if (!(tree->left) && !(tree->right))
			return (1);
		if (tree->left && tree->right && binary_tree_is_perfect(tree->left)
		&& binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: ptr
 * return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
		size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;
	return (left >= right ? left : right);
}
