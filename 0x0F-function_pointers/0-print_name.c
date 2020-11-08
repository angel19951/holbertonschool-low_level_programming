#include "function_pointers.h"

/**
 * print_name prints a name
 * @name: name to be printed
 * Return: no return on void function
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);

}
