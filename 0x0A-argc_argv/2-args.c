#include <stdlib.h>
#include <stdio.h>
/**
  * main - The main function that accepts arguments from the command line.
  * @argc: Parameter that counts the number of arguments
  * passed to the main function.
  * @argv: A string of character array passed to the
  * main function through the command line.
  *
  * Return: 0 success.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
