#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * array_iterator - Iterates over an array.
  * @size: Size of the array.
  * @array: The array to be iterated over.
  * @action: Pointer to another function.
  *
  * Return: Nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	/*action = print_value;*/
	for (i = 0; i < size; i++)
		action(array[i]);

}
