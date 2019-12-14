#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a double llist
 * @head: points to the head of the list
 * @n: the number to be added to the new node
 *
 * Return: returns the head pointer/ new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *cur = *head;

	new = malloc(sizeof(dlistint_t));

	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (*head);
	}

	while (cur->next != NULL)
		cur = cur->next;

	cur->next = new;
	new->next = NULL;
	new->prev = cur;

	return (*head);
}
