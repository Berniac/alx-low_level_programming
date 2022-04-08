#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 *
 * @ptr: pointer to previously allocated memory
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the new memory block
 * Return: if new_size = old_size, ptr
 * if new_size = 0 and ptr is not NULL, NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}

