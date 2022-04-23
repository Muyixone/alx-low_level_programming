#include <stdio.h>
/**
 * main - Prints different combinations of three digits
 * Return: Always 0 Success
*/
int main(void)
{
	int numb1, numb2, numb3;

	numb1 = '0';

	while (numb1 <= '9')
	{
		numb2 = '0';

		while (numb2 <= '9')
		{
			numb3 = '0';

			while (numb3 <= '9')
			{
				if (numb1 < numb2 && numb2 < numb3)
				{
					putchar(numb1);
					putchar(numb2);
					putchar(numb3);
					if ((numb1 != '7' || numb2 != '8') &&
					(numb1 != '7' || numb2 != '8' || numb3 != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				numb3++;
			}
			numb2++;
		}
		numb1++;
	}
	putchar('\n');
	return (0);
}
