#include <stdio.h>
/**
 * main - Prints different combinations of two digits
 * Return: Always 0 Success
*/
int main(void)
{
	int numb2;
	int numb1 = '0';

	while (numb1 <= '9')
	{
		numb2 = '0';

		while (numb2 <= '9')
		{
			if (numb1 < numb2)
			{
				putchar(numb1);
				putchar(numb2);
				if (numb1 != '8' || (numb1 != '8' && numb2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			numb2++;
		}
		numb1++;
	}
	putchar('\n');
	return (0);
}
