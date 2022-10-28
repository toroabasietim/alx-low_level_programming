#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: starting
 * @m: target
 *
 * Return: number bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	n = n ^ m;
	while (n)
	{
		bits += n & 1;
		n = n >> 1;
	}
	return (bits);
}
