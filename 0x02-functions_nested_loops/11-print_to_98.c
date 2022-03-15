#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from 
 * n t0 98
 *
 * @n: Beginning of list
 *
 * Return: Void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
