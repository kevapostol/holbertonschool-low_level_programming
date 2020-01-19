#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: a hash table
 *
 * Return: NONE
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	hash_node_t *temp;
	int i = 0;

	while (i < (int) ht->size)
	{
		if (ht->array[i] != NULL)
		{
			temp = head = ht->array[i];

			while (temp != NULL)
			{
				free(temp->key);
				free(temp->value);
				head = head->next;
				free(temp);
				temp = head;
			}	
		}
		i += 1;
	}
	free(ht->array);
	free(ht);
}
