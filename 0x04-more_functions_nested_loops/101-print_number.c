#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer.
 * Return: void
 */
void print_number(int n)
{
	unsigned int m, i, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	i = m;
	count = 1;

	while (i > 9)
	{
		i /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
