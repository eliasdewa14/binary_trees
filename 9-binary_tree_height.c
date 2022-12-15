#include "binary_trees.h"

/**
 * binary_tree_height: a function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of a binary tree
 * If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height;
    size_t right_height;

    if (!tree || (!(tree->left) && !(tree->right)))
        return (0);
    else
    {
        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);

        if (left_height > right_height)
            return (left_height + 1);
        return (right_height + 1);
    }
}