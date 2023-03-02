#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node of the tree
 * Return: factor or NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return(binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - measure height of a binary tree
 * @tree: pointer to root node of tree
 * Return: height otherwise NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
        if (tree)
        {
                size_t left = 0;
                size_t right = 0;

                if (tree->left)
                {
                        left = 1 + binary_tree_height(tree->left);
                }
                else
                        left = 0;
                if (tree->right)
                {
                        right = 1 + binary_tree_height(tree->right);
                }
                else
                        right = 0;
                return ((left > right) ? left : right);
        }
        return (0);
}
