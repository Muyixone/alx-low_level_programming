#include "main.h"
/**
 * swap_int - Swaps the value of two integers
 * @a: first integer to be swaped
 * @b: second integer to be swaped
 *
*/
void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
