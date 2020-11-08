#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer refrence
 * Return: no return on void function
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);

}
