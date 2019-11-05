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
	listint_t *temp;
	listint_t *new;
	unsigned int idx_ctr = 0;

	if (head == NULL)
		return (NULL);
	temp = *head;

	while (idx - 1 != idx_ctr)
	{
		idx_ctr++;
		temp = temp->next;
	}

	if (idx - 1 != idx_ctr)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else if (temp)
	{
		new->n = n;
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
