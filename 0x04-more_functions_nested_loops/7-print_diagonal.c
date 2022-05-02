#include "main.h"
/**
 * print_diagonal - Draws diagonal line on the terminal
 *
 * @n: Number of times the character should be printed
 * Return: Always 0 Success
 */
void print_diagonal(int n)
{
	if (n != 0)
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
			if (j == i)
			{
				_putchar('\\');
			}
			else
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
