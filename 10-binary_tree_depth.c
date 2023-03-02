#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of a node in a binary tree
 * @tree: pointer to node of tree
 * Return: depth or NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	return (0);
}
