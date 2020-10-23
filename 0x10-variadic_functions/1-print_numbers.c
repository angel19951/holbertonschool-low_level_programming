#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * prit_numbers - prints numbers, followed by a new line
 * @separator: separator between numbers
 * @n: numbers to be printed
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nArg;
	unsigned int index, temp;
	(void) separator;

	va_start(nArg, n);
	

	for (index = 0; index < n; index++)
	{
		temp = va_arg(nArg, int);
		printf("%d", temp);
		if (separator != '\0')
		{
			if (index != (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	
	va_end(nArg);
}
