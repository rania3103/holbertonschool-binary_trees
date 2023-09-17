#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (parent == NULL || newnode == NULL)
		return (NULL);

	newnode->n = value;

	if (!parent->left)
		parent->left = newnode;
	else
	{
		newnode->left = parent->left;
		parent->left = newnode;
	}

	return (newnode);
}
