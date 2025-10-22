#include "hash_tables.h"

/**
 * hash_table_get - retrieve the value associated with a key
 * @ht: hash table
 * @key: key to search for
 * Return: value if found, NULL if not found or on error
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	for (node = ht->array[index]; node; node = node->next)
		if (strcmp(node->key, key) == 0)
			return (node->value);
	return (NULL);
}
