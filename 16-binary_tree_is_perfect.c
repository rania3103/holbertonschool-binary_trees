#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: ptr
 * Return: if tree is NULL 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right_height = 0, left_height = 0;

	if (!tree)
	{
		return (1);
	}
		right_height = binary_tree_is_perfect(tree->right);
		left_height = binary_tree_is_perfect(tree->left);

	if (left_height != right_height)
	{
		return (0);
	}
	if (!binary_tree_is_perfect(tree->left && binary_tree_is_perfect(tree->right)))
	{
		return (1);
	}
		return (0);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: ptr
 * Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
		size_t right, left;

	if (!tree || (!(tree->right) && (!tree->left)))
	{
		return (0);
	}
	right = binary_tree_height(tree->right) + 1;
	left = binary_tree_height(tree->left) + 1;
	return (left >= right ? left : right);
}
