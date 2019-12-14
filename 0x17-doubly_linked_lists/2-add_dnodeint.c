#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a double llist
 * @head: points to the head of the list
 * @n: the number to be added to the new node
 *
 * Return: returns the head pointer/ new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
		new->next = NULL;
	else
		new->next = (*head);

	(*head) = new;
	return (*head);
}
