#include "variadic_functions.h"

/**
 * pritn_all - Prints anything.
 * @format: List of types of arguments passed
 * to the function.
 *
 * Return: Void.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";
	va_list ptr;

	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(ptr, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double)), c = 1;
				break;
			case 's':
				str = va_arg(ptr, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(ptr);
}	
