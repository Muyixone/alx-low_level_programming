#include "main.h"
/**
 * puts2 - Prints every other character of a string
 * @str: the string
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] > '\0')
	{
		while (i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}
		i++;
	}
	_putchar('\n');
}
