#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;
	if (n > 5)
	{
		scanf("%d, %d", &n, &s);
		printf("Last digit of %d is %d and is greater than 5\n", n, s);
	}
	else if (n == 0)
	{
		scanf("%d, %d", &n, &s);
		printf("Last digit of %d is 0 and is 0", n, s);
	}
	else if ((n < 6) && (n < 0))
	{
		scanf("%d, %d", &n, &s);
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
	}
	/* your code goes there */
	return (0);
}
