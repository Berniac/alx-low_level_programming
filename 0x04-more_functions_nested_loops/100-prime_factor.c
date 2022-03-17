#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, prim;

	n = 612852475143;
	for (prim = 2; prim <= n; prim++)
	{
		if (n % prim == 0)
		{
			n /= prim;
			prim--;
		}
	}
	printf("%ld\n", prim);
	return (0);
}
