#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash table
 * @ht: pointer to the hash table to add or update the key/value to
 * @key: the string key, cannot be an empty string
 * @value: the string value, can be an empty string
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *valueCpy;
	hash_node_t *new, *search = NULL;
	unsigned long int idx;

	if (!ht || !key || !*key || !value)
		return (0);
	valueCpy = strdup(value);
	if (!valueCpy)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	search = ht->array[idx];

	while (search)
	{
		if (!strcmp(key, search->key))
		{
			free(search->value);
			search->value = valueCpy;
			return (1);
		}
		search = search->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(valueCpy);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}

	new->value = valueCpy;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
