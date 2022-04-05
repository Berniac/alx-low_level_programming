#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter
 *
 * @str: String
 * Return: Pointer to duplicated string, NULL
 * if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *dstr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	dstr = (char *)malloc(sizeof(char) * (i + 1));

	if (dstr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		dstr[j] = str[j];

	return (dstr);
}
