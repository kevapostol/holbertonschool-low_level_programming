#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n)
 * @head: head pointer
 *
 * Return: returns an integer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);

	/*clone head to temp*/
	temp = *head;
	/*move head to next node*/
	*head = (*head)->next;
	/*assignes node value to n before freeing*/
	n = temp->n;
	/*frees the node*/
	free(temp);

	return (n);
}
