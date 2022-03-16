#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	char i = '0', j;

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	j = 'a';

	while (j < 'g')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
