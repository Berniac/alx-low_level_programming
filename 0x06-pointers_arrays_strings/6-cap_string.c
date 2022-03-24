#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: pointer to the string
 */
char *cap_string(char *s)
{
	int i, len = 0;
	int word_seps[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (*(s + len) >= 97 && *(s + len) <= 122)
		*(s + len) = *(s + len) - 32;
	len++;
	while (*(s + len) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + len) == word_seps[i])
			{
				if ((*(s + (len + 1)) >= 97) && (*(s + (len + 1)) <= 122))
					*(s + (len + 1)) = *(s + (len + 1)) - 32;
				break;
			}
		}
		len++;
	}
	return (s);
}	
