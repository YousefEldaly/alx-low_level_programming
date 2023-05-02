#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *@s: pionter to string memory area.
 *@accept: second memory area that may appear in s
 *
 * Return: he number of bytes in the initial segment
 *	of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, i = 0;
	unsigned int substr_len  = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				substr_len++;
			j++;
		}
		i++;
		j = 0;
	}
	return (substr_len);
}
