#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: head pointer
 * @idx: index
 * @n: the number to add to the new node
 *
 * Return: returns the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node, *new;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);

	node = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		*h = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		*h = new;
		return (new);
	}

	for (i = 0; node != NULL; i++)
	{
		if (i == idx - 1)
		{
			new->next = node->next;
			node->next = new;
			new->prev = node->prev;
			return (new);
		}
		node = node->next;
	}
	free(new);
	return (NULL);
}

