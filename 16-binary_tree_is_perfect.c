#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: ptr
 * Return: if tree is NULL 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right_height, left_height;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (binary_tree_height(tree->right) == binary_tree_height(tree->left))
	{
		right_height = binary_tree_is_perfect(tree->right);
		left_height = binary_tree_is_perfect(tree->left);
	}
	else
	{
		return (0);
	}
	if (right_height == 1 && left_height == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
