#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * argstostr- Concatenames all the arguments it recieves.
  * @ac: Argument to main parameter.
  * @av: Second paramter.
  *
  * Return: Return a string on success, NULL otherwise.
  * char *_strcpy(char *dest, char *src);.
  * int _strlen(char *s);.
*/

char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int j;
	int total_str_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
			total_str_length += _strlen(av[i]) + 1;
	}

	str = malloc(total_str_length + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac; i++)
		if (av[i] != NULL)
		{
			_strcpy(str + j, av[i]);
			j += _strlen(av[i]);
			str[j++] = '\n';
		}

	str[j] = '\0';
	return (str);
}

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

/**
 * *_strcpy - copies the string pointed to by src, including \0.
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
