#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a new hash table
 * @size: size of array with hash table
 *
 * Return: pointer to newly created hash table
 * and return NULL if unsuccessful
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (size < 1)
	{
		return (NULL);
	}

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->array = calloc(size, sizeof(hash_node_t *));
	hash_table->size = size;

	if ((hash_table->array) == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);
}
