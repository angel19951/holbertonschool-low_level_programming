#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints information about the dog
 * @d: structure where data us pulled
 * Return: if d == NULL return nothing, if a parameter is NULL print NIL
 */

void print_dog(struct dog *d)
{
	if (d == '\0')
	{
		return;
	}
	else if (d->name != '\0')
	{
		printf("Name:%s", d->name);
	}
	else
		printf("Name:(nil)\n");
		
	printf("Age:%f", d->age);
	printf("\n");

	if (d->owner != '\0')
	{
		printf("Owner:%s", d->owner);
		printf("\n");
	}
	else
		printf("Owner:(nil)\n");
}

