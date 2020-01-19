#include "hash_tables.h"

/**
 * hash_table_get - a function that gets a value from the hash table.
 * @ht: a hash table
 * @key: a key 
 *
 * Return: returns the value of a hash table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *head;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx =  key_index((const unsigned char *) key, ht->size);
	head = ht->array[idx];

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (strcmp(key, head->key) == 0)
			return (head->key);
		head = head->next;
	}
	return (NULL);
}
