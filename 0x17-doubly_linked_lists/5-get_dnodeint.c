#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a double linked list
 * @head: points to the head of the list
 * @index: index of a node
 *
 * Return: returns the node at nth index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		if (idx == index)
			return (head);

		idx += 1;
		head = head->next;
	}

	return (NULL);
}
