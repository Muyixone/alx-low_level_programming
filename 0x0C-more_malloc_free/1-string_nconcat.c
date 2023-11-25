#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * string_nconcat- Concats two strings.
  * @s1: First string parameter.
  * @s2: Second string parameter.
  * @n: Number of bytes.
  *
  * Return: Returns a string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;
	size_t s1_length = 0;
	size_t s2_length = 0;
	size_t total_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_length = _str_length(s1);
	s2_length = _str_length(s2);
	if (n >= s2_length)
		n = s2_length;
	total_length = s1_length + n;

	ptr = malloc(sizeof(*ptr) * (total_length) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_length; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
/**
  * _str_length- Calculates the length of a string.
  * @p: String length to be calculated.
  * Return: 0 on success, 1 otherwise.
*/

int _str_length(char *p)
{
	int count = 0;

	while (*p != '\0')
	{
		count++;
		p++;
	}
	return (count);
}
