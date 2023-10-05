#include "hash_tables.h"
/**
 * hash_table_set - add element to hash table
 * @ht: hash table added/updated
 * @key: is the key
 * @value: value paired with key
 * Return: 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

hash_node_t *new;
unsigned long int indx, z;
char *value_c;

		if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
			return (0);

	value_c = strdup(value);
		if (value_c == NULL)
			return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	for (z = indx; ht->array[z]; z++)
	{
		if (strcmp(ht->array[z]->key, key) == 0)
		{
			free(ht->array[z]->value);
			ht->array[z]->value = value_c;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_c);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_c;
	new->next = ht->array[indx];
	ht->array[indx] = new;
return (1);
}
