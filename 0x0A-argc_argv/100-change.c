#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main- Prints minimum number of coins.
  * @argc: Argument to main count.
  * @argv: Second argument to main.
  *
  * Return: 0 on success, 1 otherwise.
*/

int main(int argc, char **argv)
{
	int number_of_coins;
	int amount;
	int coins[] = {25, 10, 5, 2, 1};
	int value = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		amount = atoi(argv[1]);
		number_of_coins = 0;
		while (amount > 0)
		{
			if (amount >= coins[value])
			{
				amount -= coins[value];
				number_of_coins++;
			}
			else
			{
				value++;
			}
		}
		printf("%d\n", number_of_coins);
		return (0);
	}
}
