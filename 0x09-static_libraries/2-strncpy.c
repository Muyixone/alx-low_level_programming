#include "main.h"

/**
 *_strncpy - A function that copies src into dest
 *@dest: first string
 *@src: second string
 *@n: the number of bytes to use from src
 *
 *Return: string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, m = 0;

	while (n > m)
	{
		if (src[m] == '\0')
		{
			for (; m < n; m++)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[m];
			m++;
			i++;
		}
	}

	return (dest);
}
