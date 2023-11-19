#include <stdio.h>
#include <stdlib.h>
/**
  * main- Accepts command line arguments.
  * @argc: Counts the numberof arguments passed to main
  * through the command line.
  * @argv: A string of character passed to main through
  * the command line.
  *
  * Return: 1 on Error, 0 otherwise.
*/

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
