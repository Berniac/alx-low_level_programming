#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string
 * Return: Void
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[1000];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i--;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
