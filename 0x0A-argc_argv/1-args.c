#include <stdlib.h>
#include <stdio.h>
/**
  * main - A function that accepts command line arguments.
  * @argc: Interger paramter that counts the number of arguments
  * passed in the command line.
  * @argv: An unused parameter.
  *
  * Return: 0 success.
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	int count = 1;

	argc -= count;

	printf("%d\n", argc);
	return (0);
}
