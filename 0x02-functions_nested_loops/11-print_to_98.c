#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers when called
 * @n: number to print from
 * Return: Always 0 Success
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		n = n;
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", 98);
	}
	else
	{
		n = n;
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", 98);
	}
}
