#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
   * _strdup - 
   * @str: 
   *
   * Return: Returns char pointer on success, Null otherwise.
 */

char *_strdup(char *str)
{
	char *ptr;
	int count;
	int str_length;


	if (str == NULL)
		return (NULL);
	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}

	str_length = count;
	ptr = malloc(str_length);

	if (ptr == NULL)
		return (NULL);

	while (*str)
	{
		*ptr = *str;
		str++;
		ptr++;
	}
	/**
	for (i = 0; i <= str_length; i++)
	{	
		ptr[i] = *str;
	}
	*/
		
	return (ptr);
}
