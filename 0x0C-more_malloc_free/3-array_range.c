#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * array_range- Creates an array that contains all values min to max.
  * @min: Minimum value.
  * @max: Maximum value.
  *
  * Return: Pointer to the newly created array.
*/

int *array_range(int min, int max)
{
	int *ptr;
	size_t i;
	size_t size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;
	return (ptr);

}
