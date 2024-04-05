#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is root
 * @node: pointer to node to check
 *
 * Return: 1 if leaf, 0 if not leaf or fail
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
