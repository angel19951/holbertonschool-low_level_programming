#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory for the allocated mememory
 * @d: memory to be freed
 * Return: no return
 */

void free_dog(dog_t *d)
{

	if (d == '\0')
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
