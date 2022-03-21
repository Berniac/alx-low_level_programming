#include "main.h"

/**
 * puts2 - prints every other character of a
 * string, starting with the first character
 * @str: input string
 * Return: Void
 */
void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i = i + 2;
	}
}
