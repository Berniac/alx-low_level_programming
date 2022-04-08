#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates 2 strings
 *
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 * Return: Pointer to concatenated string,
 * NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int ls1, ls2, lsout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	str = malloc(lsout + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < ls1)
			str[i] = s1[i];
		else
			str[i] = s1[i - ls1];

	str[i] = '\0';

	return (str);
}
