#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the size
 * Return: the size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (size(tree->left) + size(tree->right) + 1);	
}
