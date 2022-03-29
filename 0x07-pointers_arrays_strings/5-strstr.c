#include "main.h"

/**
 * _strstr - finds 1st occurrence of substring
 * needle in the string haystack
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginnging of the 
 * located substring, NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack1, *needle1;

	while (*haystack != '\0')
	{
		haystack1 = haystack;
		needle1 = needle;

		while (*haystack != '\0' && *needle1 != '\0' && *haystack == *needle1)
		{
			haystack++;
			needle1++;
		}
		if (!*needle1)
			return (haystack1);
		haystack = haystack1 + 1;
	}
	return (0);
}
