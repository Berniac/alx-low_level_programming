#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: String
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, min = 1, n = 0;
	unsigned int oi = 0;

	while (s[i])
	{
		if (s[i] == 45)
			min *= -1;
		while (s[i] >= 48 && s[i] <= 57)
		{
			n = 1;
			oi = (oi * 10) + (s[i] - '0');
			i++;
		}

		if (n == 1)
			break;
		i++;
	}

	oi *= min;
	return (oi);
}
			
