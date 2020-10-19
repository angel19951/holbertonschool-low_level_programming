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
	else if (d->name == '\0')
	{
		printf("Name: (nil)");
	}
	else if (d->age == '\0')
	{
		printf("Age: (nil)");
	}
	else if (d->owner == '\0')
	{
		printf("Owner: (nil)");
	}
	else
		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner);
}

