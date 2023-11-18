#include "main.h"
/**
 * _abs - computes absolute value
 * @a: argument returns an integer
 *
 * Return: Always 0.
*/
int _abs(int a)
{
	if (a < 0)
		return (a * (-1));
	else if (a == 0)
		return (0);
	else
		return (a);
	_putchar('\n');
	return (0);
}
