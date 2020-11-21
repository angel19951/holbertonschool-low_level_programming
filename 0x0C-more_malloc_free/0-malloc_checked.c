#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using maloc
 * @b: memory to be allocated
 * Return: no return for void functions
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
