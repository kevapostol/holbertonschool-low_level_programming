#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - a function that prints all the elements of a list
 * @h: pointer to a node
 *
 * Return: int, num of nodes
 */

size_t listint_len(const listint_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
