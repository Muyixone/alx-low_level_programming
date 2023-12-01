#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * int_index - Searches for an integer.
  * @array: Array to be searched.
  * @size: The number of elements in the array.
  * @cmp: Pointer to another function to be used to compare values.
  *
  * Return: 0 success, 1 otherwise.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
