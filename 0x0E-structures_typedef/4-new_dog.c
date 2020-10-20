#include "dog.h"
#include <stdlib.h>
int _strlength(char *str);
char *_strcpy(char *str);

int _strlength(char *str)
{
	int index = 0;
	while (*(str + index) != '\0')
	{
		index++;
	}
	return (index + 1);
}
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
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	return (newDog);
}
