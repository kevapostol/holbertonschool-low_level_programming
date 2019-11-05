#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free the list
 * @head: head pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		free(temp);
		*head = (*head)->next;
	}

	*head = NULL;
}
