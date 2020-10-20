#include "dog.h"

/**
 * init_dog - initialized the variables of the "dog struct"
 * @d: struc of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	if (d->name == '\0')
	{
		return;
	}
	d->age = age;
	d->owner = owner;
}
