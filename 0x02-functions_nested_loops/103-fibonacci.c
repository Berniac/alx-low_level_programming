#include <stdio.h>

/**
 * main - finds and prints sum of even numbers
 * in fibonacci sequence
 *
 * Return: Always 0
 */
int main(void)
{
	long int num1, num2, fn, sum;

	num1 = 1;
	num2 = 2;
	fn = sum = 0;
	while (fn < 4000000)
	{
		fn = num1 + num2;
		num1 = num2;
		num2 = fn;
		if ((num1 % 2) == 0)
			sum += num1;
	}
	printf("%ld\n", sum);
	return (0);
}
