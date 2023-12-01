#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_all - Prints anything.
  * @format: The type of argument past to the function
  * c:char, i:int, f:float, s:char*
  *
  * Return: Nothing.
*/

void print_all(const char * const format, ...)
{
	int count;
	va_list ap;
	const char *str;

	va_start(ap, format);
	count = 1;
	str = format;

	while (*str != '\0')
	{
		switch (*str)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				if ('s' == '\0')
					printf("(nil)");
				else
					printf("%s", va_arg(ap, const char *));
			default:
				break;
		}
		if (*str == 'c' || *str == 'i' || *str == 'f' || *str == 's')
		{
			if (str[count] != '\0')
				printf(", ");
		}
		count++;
		++str;
	}
	printf("\n");
}
