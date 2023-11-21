#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * create_array - Creates an array of chars.
  * @size: the size of the memory to print.
  * @c: character to be initialized.
  *
  * Return: Pointer on sucess, NULL otherwise.
*/

char *create_array(unsigned int size, char c)
{
	char *array_chars;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array_chars = malloc(size * sizeof(char));
	if (array_chars == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array_chars[i] = c;
	return (array_chars);
}
