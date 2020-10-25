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
	const char *pt;
	char *strValue;
	int iValue, c;
	float fltValue;
	char *empty = "";
	char *separator = "";
	char *ptSeparator = ", ";

	va_start(arg, format);
	pt = format;
	while (*pt != '\0')
	{
		switch (*pt)
		{
			case 'c':
				printf("%s", separator);
				c = va_arg(arg, int);
				printf("%c", c);
				separator = ptSeparator;
				break;
			case 'f':
				printf("%s", separator);
				fltValue = va_arg(arg, double);
				printf("%f", fltValue);
				separator = ptSeparator;
				break;
			case 's':
				printf("%s", separator);
				strValue = va_arg(arg, char *);
				if (*strValue == '\0')
				{
					printf("nil");
					break;
				}
				printf("%s", strValue);
				separator = ptSeparator;
				break;
			case 'i':
				printf("%s", separator);
				iValue = va_arg(arg, int);
				printf("%d", iValue);
				separator = ptSeparator;
				break;
			default:
				printf("%s", empty);
				break;
		}
		pt++;
	}
	printf("\n");
	va_end(arg);
}
