#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the bit value.
 * @index: the index to get bit at, index starts from 0
 * Return: the value of the bit at index index or -1 if an error occured
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (n & (1 << index))
		return (1);

	return (0);
}
