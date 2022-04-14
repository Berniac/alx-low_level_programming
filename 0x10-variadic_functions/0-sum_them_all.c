#include "variadic_functions.h"

/**
 * sum_them_all - Returns sum of all parameters
 * @n: Number of parameters
 *
 * Return: Sum, if n == 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);
	
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}
