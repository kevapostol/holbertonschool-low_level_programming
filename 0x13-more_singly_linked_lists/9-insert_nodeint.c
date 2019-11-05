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
	listint_t *temp, *new;
	unsigned int idx_ctr = 0;

	/*Check for a Empty List*/
	if (!head || !(*head) || idx < 0)
		return (NULL);

	/*Clone head to temp*/
	temp = *head;

	/*Traverse to idx - 1*/
	while (idx - 1 != idx_ctr && temp->next != NULL)
	{
		idx_ctr++;
		temp = temp->next;
	}

	if (idx - 1 != idx_ctr)
		return (NULL);

	/*Create a new node*/
	new = malloc(sizeof(listint_t));
	/*Check Malloc*/
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = (*head)->next;
		*head = new;
		return (new);
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
