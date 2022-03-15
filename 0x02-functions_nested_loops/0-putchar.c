#include "main.h"

/**
 * main - Program prints _putchar
 *
 * Return: Always 0
 */

int main(void)
{
	int text[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i, size;
	
	size = sizeof(text) / sizeof(int);

	for (i = 0; i < size; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
