#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all paramerters
 * @n: parameters to be summed
 * Return: sum of parameters on succes, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int index, sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);

	sum = 0;
	for (index = 0; index < n; index++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
