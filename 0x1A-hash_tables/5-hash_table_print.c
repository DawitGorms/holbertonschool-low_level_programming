#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	int first = 1;
	unsigned long idx;

	if (!ht)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		current = ht->array[idx];
		while (current)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first = 0;
			current = current->next;
		}
	}

	printf("}\n");

}
