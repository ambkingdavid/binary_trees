#include "binary_trees.h"


/**
 * binary_tree_insert_right - inserts a node as the right child of another
 * @parent: a pointer to the node to inssert the right child in
 * @value: the value of the new node
 *
 * Return: the pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!(parent))
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!(new))
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}

	parent->right = new;
	return (new);
}
