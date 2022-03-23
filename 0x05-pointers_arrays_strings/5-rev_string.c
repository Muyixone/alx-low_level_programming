#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
*/

void rev_string(char *s)
{
		int length, i, j;
		char numb1, numb2;

		length = 0;

		while (s[length] > '\0')
		{
			length++;
		}

		i = 0;
		j = length - 1;

		while (j > i)
		{
			numb1 = s[i];
			numb2 = s[j];
			s[i] = numb2;
			s[j] = numb1;

			j--;
			i++;
		}
}
