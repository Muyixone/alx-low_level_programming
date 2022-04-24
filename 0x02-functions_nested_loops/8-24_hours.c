#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: Always (0) Success
*/
void jack_bauer(void)
{
	int hours = 0, minutes;

	while (hours <= 23)
	{
		minutes = 0;
		while (minutes <= 59)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');
			minutes++;

		}
		hours++;
	}
}
