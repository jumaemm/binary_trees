#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves in a binary tree
 * @tree: pointer to root of the tree
 * Return: count or NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			count += 1;
		else
			count += 0;
		count += binary_tree_leaves(tree->left);
		count += binary_tree_leaves(tree->right);
	}
	return (count);
}
