#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@m: string to modify
 *
 *Return: m
 */

char *string_toupper(char *m)
{
	int i = 0;

	while (m[i] != '\0')
	{
		if (m[i] > 96 && m[i] < 123)
		{
			m[i] -= 32;
		}
		i++;
	}

	return (m);
}
