#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: Argument count to be multiplied
 * @argv: Argument vector
 *
 * Return: Always 0 (Success), or 1 when not successful
*/
int main(int argc, char *argv[])
{
	int i, exit = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit = 1;
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", i);
	}
	return (exit);
}
