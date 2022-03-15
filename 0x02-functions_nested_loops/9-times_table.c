#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Void
 */

void times_table(void)
{
	int i, j, prod;

	for  (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			prod = i * j;
			_putchar(prod);
			_putchar(' ');
		}

		_putchar('\n');
	}
}
