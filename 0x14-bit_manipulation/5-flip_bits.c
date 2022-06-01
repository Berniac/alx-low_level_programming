#include "main.h"

/**
 * flip_bits - Returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: number one
 * @m: number two
 *
 * Return: Number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num;

	for (num = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num++;
	}

	return (num);
}
