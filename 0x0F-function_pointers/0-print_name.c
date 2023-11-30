#include "function_pointers.h"
#include <stdio.h>
/**
  * print_name - Prints out a name.
  * @name: Parameter name.
  * @f: Parameter of funtion pointer that accepts a string
  * and returns void.
  *
  * Return: Nothing..
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	
	f(name);
}
