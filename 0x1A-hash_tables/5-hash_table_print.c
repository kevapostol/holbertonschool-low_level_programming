#include "hash_tables.h"

/**
 * hash_table_print - a function that prints the hash table
 * @ht: a hash table
 *
 * Return: returns the value of a hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	int idx = 0;
	hash_node_t *head;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	while (idx < (int) ht->size)
	{
		head = ht->array[idx];

		if (ht->array[idx] != NULL)
		{	
			if (flag == 1)
				printf(", ");

			/* prints key and value*/
			printf("'%s': '%s'", head->key, head->value);

			flag = 1;
			head = head->next;
		}
		idx++;
	}

	printf("}\n");
}
