#include "binary_trees.h"

/**
 * binary_tree_uncle - check for uncle of node
 * @node: nod eto be checked against
 * Return: pointer to node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL
	    || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
