#include "dog.h"
#include <stdlib.h>

/**
 * _strlength - counts length of a string
 * @str: string to be counted
 * Return: size of str
 */
int _strlength(char *str)
{
	int index = 0;

	while (*(str + index) != '\0')
	{
		index++;
	}
	return (index + 1);
}

/**
 * _strcpy - copies a string
 * @str: string to be copied
 * Return: copy of string
 */
char *_strcpy(char *str)
{
	int len = _strlength(str);
	int index;
	char *ret_str = malloc(len);

	if (ret_str == '\0')
	{
		return ('\0');
	}
	for (index = 0; index < len; index++)
	{
		ret_str[index] = str[index];
	}
	return (ret_str);
}
/**
 * new_dog - creates and returns a new dog
 * @name: name string of dog
 * @age: float num
 * @owner: name string of owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == '\0')
	{
		return ('\0');
	}

	newDog->name = _strcpy(name);
	if (newDog->name == '\0')
	{
		free(newDog);
		return ('\0');
	}

	newDog->age = age;

	newDog->owner = _strcpy(owner);
	if (newDog->owner == '\0')
	{
		free(newDog->name);
		free(newDog);
		return ('\0');
	}
	return (newDog);
}

