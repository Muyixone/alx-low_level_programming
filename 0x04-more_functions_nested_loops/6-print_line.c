#include "main.h"
/**
 * print_line - Draws a straight line
 *
 * @n: the number of times the character _ is printed
 * Return: Always 0 success
 */
void print_line(int n)
{
	if (n != 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
