#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: number
 *
 * Return: 1 if greater than 0, 0 if zero,
 * -1 otherwise.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

	_putchar('\n');
}
