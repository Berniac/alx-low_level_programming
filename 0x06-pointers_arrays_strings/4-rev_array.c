#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: Array
 * @n: Number of elements of array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i, j = 0;

	for (i = n - 1; i > -1; i--)
		*(a + j) = *(a + i);
}
