#include "binary_trees.h"

int perfect_recursive(const binary_tree_t *tree, int deep, int level);
int depth(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to root
 * Return: 1 or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int deep = depth(tree);

	return (perfect_recursive(tree, deep, 0));
}

/**
 * depth - checks depth of a tree
 * @tree: pointer to root node
 * Return: depth or NULL
 */

int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * perfect_recursive - recursive check for perfection
 * @tree: pointer to root node
 * @deep: depth of tree
 * @level: level to check from
 * Return: 1 or 0
 */

int perfect_recursive(const binary_tree_t *tree, int deep, int level)
{
	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (deep == level + 1 ? 1 : 0);
		if (tree->left == NULL || tree->right == NULL)
			return (0);
		return (perfect_recursive(tree->left, deep, level + 1) &&
			perfect_recursive(tree->right, deep, level + 1));
	}
	return (1);
}
