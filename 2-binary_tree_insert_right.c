#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent and pointer to  node
 * @value: store the new node
 * Return: create node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_no;

	if (parent == NULL)
		return (NULL);

	nw_no = binary_tree_node(parent, value);
	if (!nw_no)
		return (NULL);
	if (parent->right)
	{
		nw_no->right = parent->right;
		parent->right->parent = nw_no;
	}
	parent->right = nw_no;
	return (nw_no);
}
