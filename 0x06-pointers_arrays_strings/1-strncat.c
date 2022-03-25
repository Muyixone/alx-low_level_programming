#include "main.h"

/**
 *_strncat - function that concatenates two strings
 *it will use at most n bytes from src. src does not need to be null terminated
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be concatenated
 *
 *Return: pointer to destination string
 *_strncat - concatinate 2 strings
 *@dest: first string
 *@src: second string
 *@n: the number of bytes to use from src
*/

char *_strncat(char *dest, char *src, int n)
{
	int length, j;
/* j is a counter for  n bytes of src to be concatenated */
/* length = length of destination string */
	int i = 0, k = 0;

	length = 0;
	while (dest[length] != '\0')
	while (dest[i] != '\0')
		i++;

	while (src[k] != '\0' && n > k)
	{
		length++;
		dest[i] = src[k];
		k++;
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	if (n > 0)
	{
		dest[length] = src[j];
		dest[i] = '\0';
	}
	dest[length] = '\0';

	return (dest);
}
