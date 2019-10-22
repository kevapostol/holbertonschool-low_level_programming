#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret;
	int len_name = 0, len_owner = 0, i = 0;

	for (; name[len_name]; len_name++)
		;
	for (; owner[len_owner]; len_owner++)
		;

	ret = malloc(sizeof(dog_t));
	if (ret == NULL)
		return (NULL);

	(*ret).name = malloc((len_name + 1) * sizeof(char));
	if (ret->name == NULL)
	{
		free(ret);
		return (NULL);
	}
	(*ret).owner = malloc((len_owner + 1) * sizeof(char));
	if (ret->owner == NULL)
	{
		free(ret->name);
		free(ret);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		ret->name[i] = name[i];
	ret->name[i] = '\0';

	for (i = 0; owner[i]; i++)
		ret->owner[i] = owner[i];
	ret->owner[i] = '\0';
	ret->age = age;

	return (ret);
}
