#include "hash_tables.h"
/**
 * key_index - return the index of a key in a hash table
 * @key: is the key to look for
 * @size: is the size of the array of the hash table
 * Return: index at which the key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int search;
	unsigned long int index;

	search = hash_djb2((unsigned char *)key);
	index = search % size;
	return (index);
}
