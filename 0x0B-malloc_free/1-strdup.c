#include "main.h"
#include <stdlib.h>

/**
 *_strdup - allocates a value to a string.
 *@str: string.
 *Return: pointer to string if success.
*/

char *_strdup(char *str)
{
	int j;
	char *str1;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	;
	j++;
	str1 = malloc(sizeof(char) * j);

	if (str1 == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		str1[j] = str[j];
	str1[j] = '\0';
	return (str1);
}
