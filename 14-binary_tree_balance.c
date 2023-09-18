#include "binary_trees.h"
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
/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree:a pointer to the root node of the tree to measure the balance factor.
 * Return:0 if the tree is NULL.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	if (tree == NULL)
		return (0);

	balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (balance);
}
