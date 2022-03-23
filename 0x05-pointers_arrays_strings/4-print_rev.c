#include "main.h"
/**
 * print_rev - Prints a string in reverse
 *
 * @s: string to be printed in reverse
*/

void print_rev(char *s)
{
	int i = 0;
	int stringLength = 0;

	while (s[stringLength] > '\0')
	{
		stringLength++;
	}

		i = stringLength - 1;
		while (i >= 0)
		{
			_putchar(s[i]);
			i--;
		}
	_putchar('\n');
}
