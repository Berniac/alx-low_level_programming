#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if s1 and s2 match, integer
 * less than 0 if s1 less than s2, integer
 * greater than 0 if s1 greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, cmp = 0;

	while (cmp == 0)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			break;
		cmp = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (cmp);
}
