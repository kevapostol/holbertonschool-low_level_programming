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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head pointer
 * @str: string pointer
 * Return: returns a pointer that points to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->len = _strCount(str);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;

	return (*head);
}
