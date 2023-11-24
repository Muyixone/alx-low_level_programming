#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * _calloc- Allocates memory for an array/
  * @nmemb: First parameter containing array of integers.
  * @size: Size of the array.
  *
  * Return: A pointer to the memory location.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int total_size;
	int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	if (nmemb != 0)
		if (total_size / nmemb != size)
			return (NULL);
	arr = malloc(total_size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = 0;
	return (arr);
}
