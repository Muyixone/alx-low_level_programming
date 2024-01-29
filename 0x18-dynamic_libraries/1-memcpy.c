#include "main.h"

/**
 * _memcpy - input
 * @dest: inputs the pointer to string destination
 * @src: inputs the pointer to string source
 * @n: number of bytes
 * Return: pointer to destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
