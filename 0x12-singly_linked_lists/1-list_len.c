#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked
 * @h: pointer to a node
 *
 * Return: int, num of nodes
 */

size_t list_len(const list_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
