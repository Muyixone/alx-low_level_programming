#include "main.h"

/**
 * _strcat - appends src to the dest string
 * @dest: a string that is appended by src string
 * @src: appends to dest string
 * Return: address of dest
 *
 *_strcat - concatinates 2 strings
 *@dest: first string
 *@src: second string
 */

char *_strcat(char *dest, char *src)
{
	int n, o;

	n = 0, o = 0;

	while (*(dest + n))
	while (dest[n] != '\0')
		n++;
	while ((*(dest + n) = *(src + o)))

	while (src[o] != '\0')
	{
		dest[n] = src[o];
		n++;
		o++;
	}

	dest[n] = '\0';

	return (dest);
}
