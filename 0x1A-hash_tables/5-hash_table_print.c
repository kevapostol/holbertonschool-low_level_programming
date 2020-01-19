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
	int flag_first = 1;

	if (ht == NULL)
		return;

	printf("{");

	while (idx < (int) ht->size)
	{
		head = ht->array[idx];

		if (ht->array[idx] != NULL)
		{
			if (head == NULL)
				flag = 0;
			else if (head != NULL)
				flag = 1;

			if (flag == 1 && flag_first == 0)
				printf(", ");

			/* prints key and value*/
			printf("'%s': '%s'", head->key, head->value);

			if (idx != 0)
				flag_first = 0;
			head = head->next;
		}
		idx++;
	}

	printf("}\n");
}
