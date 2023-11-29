#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_dog - Frees all dynamically allocated memory.
  * @d: Pointer to string in memory
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
