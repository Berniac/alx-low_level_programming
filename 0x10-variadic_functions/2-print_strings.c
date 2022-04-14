#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: char separating strings
 * @n: Number of parameters(strings)
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	print("\n");

	va_end(ptr);
}
