#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - prints strings
 * @separator to be printed
 * @n: string to be printed
 * Return: no return 
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *count;
	va_list arg;

	va_start(arg, n);
	if (n != '%')
	{
		for (index = 0; index < n; index++)
		{
			count = va_arg(arg, char *);
			if (*count == '\0')
			{
				printf("nil");
			}
			else
				printf("%s", count);
					
			if (separator != '\0')
			{
				if (index != (n - 1))
				{
					printf("%s", separator);
				}
			}
		}
	}
	printf("\n");
	va_end(arg);
}


