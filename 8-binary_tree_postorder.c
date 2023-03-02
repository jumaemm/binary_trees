#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree post-order
 * @tree: pointer to root node of tree
 * @func: function to be called on eacch node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
