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

	if (newnode == NULL)
		return (NULL);

	if (parent == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	if (!parent->left)
		parent->left = newnode;
	else
	{
		binary_tree_t *tmp = parent->left;

		parent->left = newnode;
		tmp->parent = newnode;
		newnode->left = tmp;
	}

	return (newnode);
}
