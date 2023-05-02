#include "main.h"
/**
 * _strchr - ocates a character in a string.
 * @s: pointer to string to search in.
 * @c: char to search for.
 * Return: pointer to the first occurance of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	return ('\0');
}
