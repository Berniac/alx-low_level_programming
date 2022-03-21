#include "main.h"

/**
 * swap_int - Swaps the values of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
