#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node:a pointer to the node to find the uncle.
 * Return:a pointer to the uncle node.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandpa = (node->parent)->parent;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL && grandpa == NULL)
		return (NULL);

	if (grandpa->right == node->parent)
		return (grandpa->left);
	else
		return (grandpa->right);
}
