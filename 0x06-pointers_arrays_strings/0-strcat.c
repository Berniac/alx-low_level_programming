#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: original string
 * @src: string to concatenate
 * Return: Pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + i) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}

