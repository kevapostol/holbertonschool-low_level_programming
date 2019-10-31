#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list
 * @h: pointer to a node
 *
 * Return: int, num of nodes
 */

size_t list_len(const lsit_t *h)
{
	/*list_t *temp = h;*/
	int num_elements = 0;
	char *tmp_str;

	while (h != NULL)
	{
		tmp_str = h->str
		if (tmp_str != NULL)
			num_elements++;
		num_elements++;
		h = h->next;
	}
	return (num_elements;
}
