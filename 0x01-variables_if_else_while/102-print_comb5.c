#include <stdio.h>

/**
 * main - Prints three combination of numbers
 * Return: Always 0 (Success)
*/
int main(void)
{
	int a = 48, b, c, d;

	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			c = 48;
			while (c <= 57)
			{
				d = 48;
				while (d <= 57)
				{
					if (((c + d) > (a + b) && d >= a) || a < d)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
					if (a + b + c + d == 227 && a == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar ('\n');
	return (0);
}
