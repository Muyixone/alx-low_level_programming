#include "main.h"
/**
 * print_alphabet - Prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
		int i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
}
