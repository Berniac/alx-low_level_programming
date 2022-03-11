#include <stdio.h>

/**
 * main - prints single digit numbers of base 10 from 0
 * using putchar and without using char variables
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
