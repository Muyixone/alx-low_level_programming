#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * sum_them_all - Sums all its parameters.
  * @n: number of arguments passed into function.
  * Return: 0 success.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
