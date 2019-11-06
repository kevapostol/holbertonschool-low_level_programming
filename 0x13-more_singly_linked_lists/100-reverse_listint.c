#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to head
 *
 * Return: returns the list pointed from the beginning
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = (*head)->next;

	while (next != NULL)
	{
		(*head)->next = prev;
		prev = *head;
		*head = next;
		next = (*head)->next;
	}
	(*head)->next = prev;
	return (*head);
}
