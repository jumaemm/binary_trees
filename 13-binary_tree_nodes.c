#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with atleast 1 child
 * @tree: pointer to the root node of the tree
 * Return: size or NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (tree->left || tree->right)
		{
			count += 1;
		}
		else
			count += 0;
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
	}
	return (count);
}
