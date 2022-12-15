#include "binary_trees.h"

/**
 * binary_tree_nodes:  a function that counts the nodes with at least
 * 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes in the binary tree
 * If tree is NULL, return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes = 0;

    if (!tree)
        return (0);
    nodes += binary_tree_nodes(tree->left);
    nodes += binary_tree_nodes(tree->right);
    nodes += 1;
    return (nodes)
}