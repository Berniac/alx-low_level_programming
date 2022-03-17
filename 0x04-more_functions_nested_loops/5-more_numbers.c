#include "main.h"

/**
 * more_numbers - prints 0 to 4 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i ++)
	{
		for (j = 0; j < 15; j++)
			_putchar(j + '0');
		_putchar('\n');
	}
	_putchar('\n');
}
