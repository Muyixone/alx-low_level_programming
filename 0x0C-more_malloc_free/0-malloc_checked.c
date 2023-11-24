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
	unsigned int i;

	memory = (int *) malloc(sizeof(int) * b);
	if (memory == NULL)
		exit(98);
	for (i = 0; i < b; i++)
		memory[i] = b;
	return (memory);
}
