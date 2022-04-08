#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements
 * @size: Size of bytes
 *
 * Return: Pointer to allocated memory,
 * if nmemb or size is 0 then NULL,
 * if it fails, NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arrmem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arrmem = malloc(nmemb * size);

	if (arrmem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arrmem[i] = 0;

	return (arrmem);
}
