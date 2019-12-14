#include "lists.h"

/**
 * free_dlistint - frees a double linked list
 * @head: points to the head of the list
 *
 * Return: nothing to return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
