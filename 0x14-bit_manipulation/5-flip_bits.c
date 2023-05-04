#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 *	flip to get from one number to another.
 * @n: first number
 * @m: second number
 * return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, num_of_bits = 0;

	while (xor != 0)
	{
		num_of_bits += (xor & 1);
		xor >>= 1;
	}

	return (num_of_bits);
}
