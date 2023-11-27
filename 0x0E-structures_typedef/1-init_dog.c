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
	struct dog *ptr;

	ptr = d;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
