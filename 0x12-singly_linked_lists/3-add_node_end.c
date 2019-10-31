#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strCount - returns the number of elements of a string
 * @str: char pointer to a stirng
 *
 * Return: int, len of string
 */
int _strCount(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head pointer
 * @str: string pointer
 * Return: returns a pointer that points to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *curr = *head;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->len = _strCount(str);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (curr->next != NULL)
		curr = curr->next;

	curr->next = new;
	curr = new;
	new->next = NULL;

	return (new);
}
