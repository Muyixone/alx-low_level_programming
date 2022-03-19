#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * print_alphabet: function to print alphabets
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
