#include <stdio.h>

/**
 * main - Prints all possible different combinations pf 3 digits
 *
 * Return: Always 0
 */
int main(void)
{
	int num1, num2, num3;

	num1 = 48;
	num2 = 48;
	num3 = 48;

	while (num1 < 58)
	{
		num2 = 48;
		while (num2 < 58)
		{
			num3 = 48;
			while (num3 < 58)
			{
				if (num1 != num2 && num1 != num3 && num2 != num3 && num1 < num2 && num2 < num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);

					if (num1 == 55 && num2 == 56 && num3 == 57)
						break;

					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}

	putchar('\n');
	return (0);
}
