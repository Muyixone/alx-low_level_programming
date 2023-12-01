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

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return;
		printf("%d", va_arg(ap, int));

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
