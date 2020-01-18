#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of a hash table
 *
 * Return: void
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
