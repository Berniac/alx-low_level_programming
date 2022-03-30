#include "main.h"

/**
 * is_prime - checks to see if number is prime.
 * @n: number
 * @c: factor check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(int n, int c)
{
	if (n < 2 || n % c == 0)
		return (0);
	else if (c > n / 2)
		return (1);
	else
		return (is_prime(n, (c + 1)));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: input number
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (is_prime(n, 2));
}
