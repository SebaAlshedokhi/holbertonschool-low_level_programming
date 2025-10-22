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
	hash_table_t *tmp;
	
	if (key == NULL)
		return (0);
	tmp = malloc(sizeof(hash_table_t));
