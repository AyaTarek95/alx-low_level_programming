#include "hash_tables.h"
/**
 * hash_table_create - create new hash table
 * @size: size of hash table
 * Return: pointer to created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int x;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);
	htable->size = size;
	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		htable->array[x] = NULL;
	return (htable);
}
