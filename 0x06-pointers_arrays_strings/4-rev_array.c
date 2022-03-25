#include "main.h"

/**
 *reverse_array - reverse an array
 *@a: an array
 *@n: the length of the array
 */

void reverse_array(int *a, int n)
{
	int i, m, tmp;

	m = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[m];
		a[m] = tmp;
		m--;
	}
}
