#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table to look into
 * @key: the key to look for
 *
 * Return: the value associated, or NULL if the key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *search = NULL;
	unsigned long int idx;

	if (!ht || !key || !*key)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	search = ht->array[idx];

	while (search)
	{
		if (!strcmp(key, search->key))
		{
			return (search->value);
		}
		search = search->next;
	}
	return (NULL);
}
