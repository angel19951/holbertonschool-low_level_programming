#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer refrence
 * Return: no return on void function
 */

void print_name(char *name, void (*f)(char *))
{
	if (*name == '\0' || name == '\0')
	{
	return;
	}
	else if (f == '\0')
	{
		return;
	}
	else
	{
		(*f)(name);
	}
}
