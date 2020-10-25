#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - printf check and print
 * @format: values to be printed
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	char *strValue;
	char *separator = "";
	char *ptSeparator = ", ";
	const char *pt;

	va_start(arg, format);
	pt = format;
	if (pt == NULL)
	{
		return;
	}
	while (*pt != '\0')
	{
		switch (*pt)
		{
			case 'c':
				printf("%s%c", separator, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg, double));
				break;
			case 's':
				strValue = va_arg(arg, char *);
				if (strValue == NULL)
				{
					strValue = "(nil)";
				}
				printf("%s%s", separator, strValue);
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg, int));
				break;
		}
		separator = ptSeparator;
		pt++;
	}
	printf("\n");
	va_end(arg);
}
