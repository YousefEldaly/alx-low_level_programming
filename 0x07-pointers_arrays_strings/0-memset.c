#include "main.h"
/**
 * _memset - ills memory with a constant byte.
 * @s: pointer to memory area to set.
 * @b: const value filled in memory area.
 * @n: number of bytes in memory area.
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
