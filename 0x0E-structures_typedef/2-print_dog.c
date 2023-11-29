#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_dog - Prints a struct dog
  * @d: Parameter to the struct dog
  * Return: Void is returned.
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		if (!d->age)
			printf("Age: (nil)\n");
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
