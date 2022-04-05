#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * 
 * @s1: string 1
 * @s2: string 2
 * Return: Pointer to a newly allocated space
 * in memory which contains contents of s1,
 * followed by contents of s2 and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *jstr;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[i] != '\0'; j++)
		;

	jstr = malloc(sizeof(char) * (i + j + 1));

	if (jstr == NULL)
	{
		free(jstr);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		jstr[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		jstr[k] = s2[j];

	return (jstr);
}
