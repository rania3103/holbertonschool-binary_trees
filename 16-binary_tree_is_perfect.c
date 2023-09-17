#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: ptr
 * Return: if tree is NULL 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
		int left_height = 0,
			left_leaves = 0,
			right_height = 0,
			right_leaves = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves == right_leaves);
}
