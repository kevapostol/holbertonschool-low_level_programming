#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list
 * @h: pointer to a node
 *
 * Return: int, num of nodes
 */

size_t print_list(const list_t *h)
{
	/*list_t *temp = h;*/
	int num_nodes = 0;
	char *tmp_str;

	while (h != NULL)
	{
		tmp_str = h->str;

		if (tmp_str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, tmp_str);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
