#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a particular char
 *
 * @size: size of array
 * @c: initialization character
 * Return: Pointer to the array, NULL if it fails
 */
char *creat_array(unsigned int size, char c)
{
	char *arr;
	arr = malloc(sizeof(*arr) * size);

	if (size <= 0)
		return NULL;

	arr[0] = c;
	return (*arr);
}
