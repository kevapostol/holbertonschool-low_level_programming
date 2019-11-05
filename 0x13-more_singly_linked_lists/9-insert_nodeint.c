#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at index
 * @head: pointer to a node
 * @idx: index
 * @n: number to add to node
 * Return: points to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*Variable declaration*/
	unsigned int i = 0;
	listint_t *prev, *new;
	/*Check for an empty list*/
	if ((head == NULL || *head == NULL) && idx != 0)
		return (NULL);
	/*clone head to prev*/
	prev = *head;
	/*malloc new node*/
	new = malloc(sizeof(listint_t));
	/*check for malloc*/
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; prev != NULL; i++)
	{
		if (i == (idx - 1))
		{
			new->n = n;
			new->next = prev->next;
			prev->next = new;
			return (new);
		}
		prev = prev->next;
	}
	free(new);
	return (NULL);
}
