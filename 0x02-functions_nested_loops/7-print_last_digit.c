#include "main.h"

/**
 * print_last_digit - prints last digit of
 *  a number
 *
 *  @i: the number
 *
 *  Return: value of the last digit.
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
	{
		_putchar(-j + 48);
		return (-j);
	}
	else
	{
		_putchar(j + 48);
		return (j);
	}

	_putchar('\n');
}
