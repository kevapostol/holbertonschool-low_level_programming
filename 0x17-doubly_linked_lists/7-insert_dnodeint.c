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
	dlistint_t *new, *temp = *h;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if ((*h == NULL && idx == 0) || ((*h)->next != NULL && idx == 0))
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	for (i = 0; temp != NULL; i++, temp = temp->next)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			new->prev = temp;
			temp->next = new;
			if (temp->next != NULL)
				temp->next->prev = new;
			return (new);
		}
	}

	free(new);
	return (NULL);
}

