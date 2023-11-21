#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
   * _strdup- Returns a pointr to newly allocated space in memory.
   * @str: string parameter.
   *
   * Return: Returns char pointer on success, Null otherwise.
 */

char *_strdup(char *str)
{
	char *ptr;
	int count;
	int i;

	if (str == NULL)
		return (NULL);
	count = 0;
	while (str[count] != '\0')
		count++;
	ptr = malloc(sizeof(*str) * count + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		ptr[i] = str[i];

	ptr[i] = '\0';
	return (ptr);
}
