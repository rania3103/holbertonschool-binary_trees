#include "binary_trees.h"
/**
 * binary_tree_insert_right -inserts a node as the right-child of another node.
 * @parent: a pointer to the node to insert the right-child in.
 * @value:the value to store in the new node.
 * Return:a pointer to the created node, or NUL.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *tmp;

	if (parent == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->right)
	{
		tmp = parent->right;
		parent->right = new_node;
		new_node->right = tmp;
	}
	else
		parent->right = new_node;

	return (new_node);
}
