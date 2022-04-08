#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 *
 * @min: Minimum value
 * @max: Maximum values
 * Return: Pointer to array,
 * if min > max, NULL,
 * if it fails, NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
