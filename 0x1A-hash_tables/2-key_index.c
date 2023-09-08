#include "hash_tables.h"
/**
 * key_index - Calculates the index for a given key in a hash table
 * @key: The key to be hashed
 * @size: The size of the array in the hash table
 *
 * Return: The index at which the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
