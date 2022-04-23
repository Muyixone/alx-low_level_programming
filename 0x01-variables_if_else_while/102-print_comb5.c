#include <stdio.h>
/**
 * main - Program to print possible combinations of two two digits
 * Return: Always 0 Success;
*/
int main(void)
{
	int numb1 = '0', numb2, numb3, numb4;

	while (numb1 <= '9')
	{
		numb2 = '0';
		while (numb2 <= '9')
		{
			numb3 = '0';
			while (numb3 <= '9')
			{
				numb4 = '0';
				while (numb4 <= '9')
				{
					if (numb1 >= numb2 || numb4 <= numb3)
					{
					if (numb1 <= numb3 && numb2 < numb4)
					{
						putchar(numb1);
						putchar(numb2);
						putchar(' ');
						putchar(numb3);
						putchar(numb4);
					if ((numb1 != '9' || numb2 != '8' || numb3 != '9') &&
					(numb1 != '9' || numb2 != '8' || numb3 != '9' || numb4 != '9'))
						putchar(',');
					}
					}
					numb4++;
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
