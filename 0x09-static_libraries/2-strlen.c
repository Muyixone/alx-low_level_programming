#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: string whose length is to be calculated
 *
 * Return: length of the string
*/
int _strlen(char *s)
{
	int i = 0;
	int stringLength = 0;

	while (s[i] != '\0')
	{
		stringLength++;
		i++;
	}
	return (stringLength);
}
