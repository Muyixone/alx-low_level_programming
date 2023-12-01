#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_numbers - Prints numbers.
  * @separator: First variadic argument.
  * @n: Number of integers passed to the function.
  *
  * Return: Nothing.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0)
		return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (n > 1 && separator == NULL)
			return;
		else if (i)
			printf("%s", separator);
		printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
