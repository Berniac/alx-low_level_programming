#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: number of times character is to be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar(95);

	_putchar('\n');
}
