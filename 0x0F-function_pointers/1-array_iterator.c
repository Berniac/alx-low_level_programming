#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as
 * a parameter on eachelement of an array
 * @array: Integer array
 * @size: Size of the array
 * @action: Pointer to function
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
		for (; i < size; i++)
			action(array[i]);
}
