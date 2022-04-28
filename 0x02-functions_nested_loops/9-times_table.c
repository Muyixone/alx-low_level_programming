#include <stdio.h>
#include "main.h"
/**
 * times_table - prints 9 times table
 *
 * return: void
*/
void times_table(void)
{
	int a, b, result;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = a * b;

			if ((result / 10) == 0)
			{
			if (b == 0)
			{
				_putchar('0');
			}
			if (b != 0)
			{
				_putchar(' ');
				_putchar((result % 10) + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			}
		}
		_putchar('\n');
	}
}
