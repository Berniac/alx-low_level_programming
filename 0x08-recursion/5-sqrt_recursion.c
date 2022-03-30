#include "main.h"

/**
 * _check - checks for square root
 * @n: number to find square root
 * @g: guess at the square root
 * Return: square root of n or -1
 */
int _check(int n, int g)
{
	if (g * g == n)
		return (g);
	if (g * g > n)
		return (-1);
	return (_check(n, (g + 1)));
}

/**
 * _sqrt_recursion - returns natural sqrt of a num
 * @n: Number to find square root of
 * Return: natural sqrt of number, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_check(n, 1));
}
