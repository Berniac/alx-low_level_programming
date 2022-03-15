#include "main.h"

/**
 * print_times_table - prints the n timetable
 *
 * @n: input number
 *
 * Return: Void
 */
void print_times_table(int n)
{
	int i, j, op;

	if (n > 0 || n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				op = i * j;
				_putchar(',');
				_putchar(' ');
				if (op <= n)
				{
					_putchar(' ');
					_putchar(op + 48);
				}
				else
				{
					_putchar((op / 10) + 48);
					_putchar((op % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
