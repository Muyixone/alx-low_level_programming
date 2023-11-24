#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * malloc_checked- Stores int to allocated point in memory.
  * @b: Integer paramter.
  *
  * Return: Pointer to memory location
*/

void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(sizeof(*memory) * b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
