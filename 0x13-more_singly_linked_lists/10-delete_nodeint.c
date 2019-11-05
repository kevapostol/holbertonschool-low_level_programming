#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - returns the sum of all the data of a linked list
 * @index: index
 * @head: head pointer
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *prev = NULL;
	unsigned int idx_ctr = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && index != idx_ctr)
	{
		prev = temp;
		temp = temp->next;
		idx_ctr += 1;
	}

	if (index != idx_ctr)
	{
		return (-1);
	}

	if (prev == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);
	return (1);
}
