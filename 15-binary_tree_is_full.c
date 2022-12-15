#include "binary_trees.h"

/**
 * binary_tree_is_full: a function that checks if a binary tree is full
 * @tree:  pointer to the root node of the tree to check
 *
 * Description: If tree is NULL, return 0
 *
 * Return: 1 if a binary tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->left));
	}
	if (!tree->left && !tree->right)
		return (1);
	return (0);
}
