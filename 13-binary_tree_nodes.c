#include "binary_trees.h"
/**
 * binary_tree_nodes - count the nodes at least 1 child in a binary tree
 * @tree: ptr
 * Return: nodes with at least 1 child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (0);
	}
	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right) + 1;
	return (count);
}
