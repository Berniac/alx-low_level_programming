#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: original string to concatenate to
 * @src: source string
 * @n: number of bytes from src
 * Return: Pointer to concatenated string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
