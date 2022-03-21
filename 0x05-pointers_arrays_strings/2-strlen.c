#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: Length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
		count++;

	return (count);
}
