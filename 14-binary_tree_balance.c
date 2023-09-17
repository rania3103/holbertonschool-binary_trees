#include "binary_trees.h"
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

	balance = binary_tree_heigh(tree->left) - binary_tree_heigh(tree->left);
	return (balance);
}
