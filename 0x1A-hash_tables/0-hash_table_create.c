#include "hash_tables.h"

/**
 * hash_table_create - creates and returns a new hash table
 * @size: size of the array
 * Return: pointer to a newly created hash table || NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int count = 0;
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (size == 0 || new == NULL)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(hash_table_t *) * size);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	while (count < size)
	{
		new->array[count] = NULL;
		count++;
	}
	return (new);
}
