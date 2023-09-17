#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: ptr
 * Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_hight = 0, right_hight = 0;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}
	left_hight = binary_tree_height(tree->left);
	right_hight = binary_tree_hight(tree->right);

	if (left_hight >= right_hight)
	{
		return (left_hight +1);
	}
	return (right_hight +1);
}
