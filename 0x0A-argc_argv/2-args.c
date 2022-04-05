#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int value;
	(void) argc;
	for (value = 0; value < argc; value++)
		printf("%s\n", argv[value]);
	return (0);
}
