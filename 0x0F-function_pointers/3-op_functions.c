#include "3-calc.h"

/**
 * op_add - Adds 2 integers
 * @a: 1st Integer
 * @b: 2nd Integer
 *
 * Return: Addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: Subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplie 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: Multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: Integer division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Gets remainder of division of 2 ints
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: Remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
