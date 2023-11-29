#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * new_dog - Creates a new dog.
  * @name: Name of the dog as a parameter.
  * @age: Age of the dog as a param.
  * @owner: The dog's owner.
  *
  * Return: A pointer.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = _strdup(name);
	if (ptr->name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	ptr->owner = _strdup(owner);
	if (ptr->owner == NULL)
	{
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	ptr->age = age;

	return (ptr);
}

/**
  * _strdup - Returns a pointer to a newly allocated space in memory.
  * @str: String paramter.
  * Return: Returns a pointer to sring in memory
*/

char *_strdup(char *str)
{
	size_t i;
	char *p;
	size_t count;

	if (str == NULL)
		return (NULL);
	count = 0;
	while (str[count] != '\0')
		count++;
	p = malloc(sizeof(*str) * count + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		p[i] = str[i];

	p[i] = '\0';
	return (p);
}

