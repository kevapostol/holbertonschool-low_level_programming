#include"lists.h"

/**
 * print_dlistint - a function that prints all the elements of a list
 * @h: pointer to a node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num_nodes);
}
