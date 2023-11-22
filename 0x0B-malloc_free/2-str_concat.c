#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * str_concat- Concatenates two strings.
  * @s1: First parameter.
  * @s2: Second paramter.
  *
  * Return: Returns character pointer on success, NULL otherwise.
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int s1_length = 0;
	int s2_length = 0;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	while (s1[s1_length] != '\0')
		s1_length++;

	while (s2[s2_length] != '\0')
		s2_length++;

	ptr = malloc(sizeof(char) * (s1_length + s2_length) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		ptr[i] = s1[i];

	for (j = 0; j < s2_length; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';
	return (ptr);
}
