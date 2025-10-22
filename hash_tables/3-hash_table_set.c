#include"hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Description: a function that adds an element to the hash table
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	char *vcopy;

	if (!ht || !key || !*key || !value)
		return (0);
	vcopy = strdup(value);
	if (!vcopy)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (node = ht->array[index]; node; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = vcopy;
			return (1);
		}
	}
	node = malloc(sizeof(*node));
	if (!node)
	{
		free(vcopy);
		return (0);
	}
	node->key = strdup(key);
	if (!node->key)
	{
		free(vcopy);
		free(node);
		return (0);
	}
	node->value = vcopy;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
