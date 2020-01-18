#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: a hash table
 * @key: a key
 * @value: a string to be added to the hash table
 *
 * Return: 1 returns success, 0 returns fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	int status;

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}

	newnode->value = strdup(value);
	if (newnode->value == NULL)
	{
		free(newnode);
		return (0);
	}

	newnode->next = NULL;

	/* helper function */
	status = attach_node_to_ht(ht, newnode);

	if (status == 1)
		return (1);
	else
		return (0);
}

/**
 * attach_node_to_ht - a function that attaches the node to the hash table
 * @ht: a hash table pointer
 * @node: a hash node pointer
 *
 * Return: 1 returns success, 0 returns fail
 */
int attach_node_to_ht(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int idx;
	hash_node_t *head;

	idx =  key_index((const unsigned char *) node->key, ht->size);
	/*printf("idx: is %lu\n", idx);*/
	head = ht->array[idx];

	if (head == NULL)
	{
		ht->array[idx] = node;
		/*printf("I put the node to the index\n");*/
		return (1);
	}
	else if (head != NULL)
	{
		while (head != NULL && head->next != NULL)
		{
			/* for clashing, replace the value of the node */
			if (strcmp(head->key, node->key) == 0)
			{
				head->value = node->value;
				free(node);
				/*printf("I replaced value of the node\n");*/
				return (1);
			}
			head = head->next;
		}

		head = ht->array[idx];
		node->next = head;
		ht->array[idx] = node;
		/*printf("I put node at the beginning\n");*/
		return (1);
	}
	return (0);
}

/**
 * freenode - a function that frees a node
 * @node: a node pointer
 *
 * Return: NONE
 */
void freenode(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
