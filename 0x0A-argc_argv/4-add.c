#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main- Accepts command line arguments.
  * @argc: Counts the number of arguments passed to
  * main through the command line.
  * @argv: A string of character passed to main through
  * the command line.
  *
  * Return: 0 on success, 1 otherwise.
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
		printf("0\n");

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
