#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - Prints strings.
  * @separator: String saparator.
  * @n: Number of arguments passed.
  *
  * Return: Nothing.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	const char *str;
	
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return;
		str = va_arg(ap, const char *);
		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
