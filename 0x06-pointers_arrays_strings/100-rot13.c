#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: pointer to s
 */
char *rot13(char *s)
{
	int len = 0, i;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + len) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + len) == alph[i])
			{
				*(s + len) = rot13[i];
				break;
			}
		}
		len++;
	}
	return (s);
}
