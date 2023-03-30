#include "binary_trees.h"

size_t check_node_left(const binary_tree_t *tree);
size_t check_node_right(const binary_tree_t *tree);

/**
 * check_node_left - finds the height of the tree to the left
 * @tree: a pointer to the root of the tree
 *
 * Return: 0 if node is the end of the tree otherwise
 *         recursively returns itself + 1
 */

size_t check_node_left(const binary_tree_t *tree)
{
	if (!(tree))
		return (0);
	if (tree->left)
		return (1 + check_node_left(tree->left));
	return (0);
}


/**
* check_node_right - the height of the tree to the right
* @tree: a pointer to the root of the tree
*
* Return: 0 if node is the end of the tree otherwise
*         recursively returns itself + 1
*/

size_t check_node_right(const binary_tree_t *tree)
{
	if (!(tree))
		return (0);
	if (tree->right)
		return (1 + check_node_right(tree->right));
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree)
	{
		left = check_node_left(tree);
		right = check_node_right(tree);

		if (left > right)
			return (left);
		else
			return (right);
	}
	return (0);
}
