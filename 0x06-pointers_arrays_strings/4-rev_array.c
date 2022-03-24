#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: Array
 * @n: Number of elements of array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = *(a + j);
			*(a + j) = *(a + (j--));
			*(a + (j--)) = tmp;
		}
	}
}
