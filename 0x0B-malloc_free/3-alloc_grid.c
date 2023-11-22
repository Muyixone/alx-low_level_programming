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

	int **ptr = malloc(width * sizeof(int) + width * height * sizeof(int));

	for (i = 0; i < width; i++)
		ptr[i] = (int *)(ptr + width) + (i * height);

	return (ptr);
}
