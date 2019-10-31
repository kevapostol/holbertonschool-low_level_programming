#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free the list
 * @head: head pointer
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		free(temp);
		head = head->next;
	}
}
