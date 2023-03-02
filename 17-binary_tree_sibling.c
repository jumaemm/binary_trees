#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of a node
 * @node: pointer to node to be checked
 * Return: pointer to node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
