#include "hash_tables.h"

/**
 * hash_table_print - a function that prints the hash table
 * @ht: a hash table
 *
 * Return: returns the value of a hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	int i;
	hash_node_t *head;
	int flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	for (i = 0; i < (int) ht->size; i++)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			flag = 1;
			head = head->next;
		}
	}
	printf("}\n");
}
