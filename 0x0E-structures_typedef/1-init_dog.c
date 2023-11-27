#include "dog.h"
#include <stdio.h>
/**
  * init_dog - Function that initializes a variable
  * @d: Structure parameter
  * @name: Dog's name as a parameter
  * @age: Dog's age as a parameter
  * @owner: Dog's owner
  *
  * Return: void
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
