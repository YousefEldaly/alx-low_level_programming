#include "main.h"
/**
 * _strncat - concatenat 2 string, with defined size of second string
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: defined n bytes of second string
 *
 * Return: pointer to dest(edited)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		++i;
	}
	while (src[j] != '\0' && i < 97 && j < n)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';

	return (dest);
}
