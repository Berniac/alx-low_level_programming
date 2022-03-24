#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: pointer to s
 */
char *leet(char *s)
{
	int len = 0, i;
	int nums[] = {52, 51, 48, 55, 49};
	int upp_lett[] = {65, 69, 79, 84, 76};
	int low_lett[] = {97, 101, 111, 116, 108};

	while (*(s + len) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + len) == low_lett[i] || *(s + len) == upp_lett[i])
			{
				*(s + len) = numbers[i];
				break;
			}
		}
		len++;
	}
	return (s);
}
