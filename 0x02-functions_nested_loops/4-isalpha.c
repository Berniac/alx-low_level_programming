#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: ASCII code for character
 *
 * Return: 1 if lowercase or uppercase letter
 * 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90)||(c >= 97 && c <= 122))
		return (1);
	else
		return (0);

	_putchar('\n');
}
