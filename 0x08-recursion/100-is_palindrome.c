#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - checks to see if a string
 * is a palindrome
 * @l: left hand index
 * @r: right hand index
 * @str: string
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(int l, int r, char *str)
{
	if (*(str + l) == *(str + r))
	{
		if (l == r || l == r + 1)
			return (1);
		return (0 + check_palindrome(l + 1, r - 1, str));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string
 * is a palindrome
 * @s: string
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
