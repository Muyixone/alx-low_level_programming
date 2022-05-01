#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14
 *
 * Return: Always 0 Success
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 0)
			{
				if (b > 9)
					_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
