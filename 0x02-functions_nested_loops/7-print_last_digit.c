#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @a: takes in numbers
 *
 * Return: Always (0) Success
*/
int print_last_digit(int a)
{
	int lastDigit;

	if (a < 0)
	{
		lastDigit = (-1 * (a % 10));
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = (a % 10);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
	
