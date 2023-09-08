#ifndef ALX_HASH_TABLE
#define ALX_HASH_TABLE

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - Data structure for a hash node
 * @key: The key associated with this node
 * @value: The value associated with this key
 * @next: structure of hash
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Data structure for a hash table
 * @size: size
 * @array: array
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Function prototype for hash_table_create */
hash_table_t *hash_table_create(unsigned long int size);

/**
 * hash_djb2 - Implements the djb2 hash algorithm
 * @str: The string to hash
 *
 * Return: The hash value
 */
unsigned long int hash_djb2(const unsigned char *str);

#endif /* ALX_HASH_TABLE */
