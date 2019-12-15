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
	dlistint_t *node = *head;
	unsigned int i;

	if(head == NULL || *head == NULL)
		return (-1);

	if ((*head)->next == NULL && index == 0)
	{
		*head = NULL;
		free(*head);
		return (1);
	}
	else if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		(*head)->prev = NULL;
		return (1);
	}

	for (i = 0; node != NULL; i++, node = node->next)
	{
		if (index == i && node->next == NULL)
		{
			node->prev->next = NULL;
			free(node);
			return (1);
		}
		else if (index == i)
		{
			node->prev->next = node->next;
			node->next->prev = node->prev;
			free(node);
			return (1);
		}
	}

	return (-1);
}
