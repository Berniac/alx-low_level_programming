#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name
 * @f: Function pointer
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
