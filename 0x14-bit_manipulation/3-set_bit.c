#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to check
 * @index: the position to set the bit
 *
 * Return: 1 on success
 * otherwise, -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1 << index;
	*n = mask | *n;
	return (1);
}
