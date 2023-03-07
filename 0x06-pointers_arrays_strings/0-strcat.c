#include "main.h"
/**
 * _strcat - concateates two strings
 * @dest: pointer to the first string
 * @src: pointer to the second string
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && i < 98)
	{
		dest[i] = src[j];
		++i;
		++j;
	}

	dest[i] = '\0';

	return (dest);
}
