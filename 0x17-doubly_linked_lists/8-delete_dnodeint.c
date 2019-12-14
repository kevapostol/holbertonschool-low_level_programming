#include "lists.h"

/**
 * delete_dnodeint_at_index - 
 * @head: points to the head of the list
 * @index: index for the node to delete
 *
 * Return: returns 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
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
