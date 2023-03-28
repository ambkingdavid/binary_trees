#include "binary_trees.h"


/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: the pointer to the node
 *
 * Return: 1 if node is a leaf or 0 if otherwisw
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL || node->right == NULL)
		return (0);

	return (1);
}
