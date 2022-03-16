#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	int d = '0';

	do {
		putchar(d);
		d++;
	} while (d <= '9');
	putchar('\n');
	return (0);
}
