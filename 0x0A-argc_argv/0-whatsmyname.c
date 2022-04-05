#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Argument count in function main
 * @argv: Argument vector, that points to an array of strings in main
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
