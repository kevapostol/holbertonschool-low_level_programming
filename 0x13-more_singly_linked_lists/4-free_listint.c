#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free the list
 * @head: head pointer
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
