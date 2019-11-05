#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 * @head: head pointer
 * @n: number to add to the node
 * Return: returns a pointer that points to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*Variable declaration*/
	listint_t *new;
	listint_t *curr = *head;

	/*Malloc node*/
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	/*Node Assignments*/
	new->n = n;

	/*Edge case*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/*Adding node to the end of list*/
	while (curr->next != NULL)
		curr = curr->next;

	curr->next = new;
	curr = new;
	new->next = NULL;

	return (new);
}
