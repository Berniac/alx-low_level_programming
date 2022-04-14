#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: Character separating numbers
 * @n: number of parameters
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator)
			if (i < n - 1)
				printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);
}
