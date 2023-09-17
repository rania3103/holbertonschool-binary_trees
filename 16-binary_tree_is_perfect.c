#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: ptr
 * Return: if tree is NULL 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right, left;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return(1);
	}
	if (!tree->left || !tree->right)
	{
		return (0);
	}
	

		right = binary_tree_is_height(tree->right);
		left = binary_tree_is_height(tree->left);

	if (left != right)
	{
		return (0);
	}
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: ptr
 * Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
		size_t right_height = 0, left_height = 0;

	if (!tree)
	{
		return (0);
	}
	right_height = binary_tree_height(tree->right) + 1;
	left_height = binary_tree_height(tree->left) + 1;
	
	if (left_height >= right_height)
	{
		return (left_height + 1);
	}
	return (right_height + 1);
}
