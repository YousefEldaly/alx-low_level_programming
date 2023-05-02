#include "main.h"
/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 *
 * @s: pointer to string to search in.
 * @accept: pointer to substring to search for.
 *
 * Return: a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		i = 0;
		s++;
	}
	return ('\0');
}
