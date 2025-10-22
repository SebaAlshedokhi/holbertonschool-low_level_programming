#include"hash_tables.h"
/**
* key_index - gives you the index of a key
* @key: key
* @size: size of the array of the hash table
* Description: a function that gives you the index of a key.
* Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
