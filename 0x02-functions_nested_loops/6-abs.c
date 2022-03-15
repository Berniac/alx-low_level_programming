#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @i: Integer value
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);

	_putchar('\n');
}
