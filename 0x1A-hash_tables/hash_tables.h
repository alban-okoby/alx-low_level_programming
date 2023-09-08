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

unsigned long int hash_djb2(const unsigned char *str);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
#endif /* ALX_HASH_TABLE */
