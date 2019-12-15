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

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*h == NULL)
	{
		*h = new;
		new->next = NULL;
		return (*h);
	}
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; temp != NULL; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			new->prev = temp;
			temp->next = new;
			temp->next->prev = new;
			return (new);
		}
		temp = temp->next;
	}
	free(new);
	return (NULL);
}

