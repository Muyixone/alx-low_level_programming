#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid- A funtion that returns a pointer to a 2
  * dimensional array of integers.
  * @width: width parameter.
  * @height: height paramter.
  *
  * Return: Returns an int pointer on success, Null otherwise.
*/

int **alloc_grid(int width, int height)
{
	int i;
	int **ptr;

	if (width == 0 || height == 0)
		return (NULL);

	ptr = malloc(width * sizeof(int) + width * height * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		ptr[i] = (int *)(ptr + width) + (i * height);

	return (ptr);
}
