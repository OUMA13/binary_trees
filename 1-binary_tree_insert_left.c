#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left child of another
 * @parent: pointer to the node to insert the left child in
 * @value: the value to store in the node
 *
 * Return: a pointer to the created node or NULL if it fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_no;

	if (!parent)
		return (NULL);

	nw_no= binary_tree_node(parent, value);
	if (nw_no == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		nw_no->left = parent->left;
		parent->left->parent = nw_no;
	}
	parent->left = nw_no;

	return (nw_no);
}

