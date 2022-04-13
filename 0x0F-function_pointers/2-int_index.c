#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Integer array
 * @size: Size of array
 * @cmp: Pointer to the function to be used to
 * compare values
 *
 * Return: Index of the first element for which
 * cmp function does not return 0. If no element
 * matches -1, if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for(; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return(-1);
}
