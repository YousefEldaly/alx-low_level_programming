#include "main.h"
/**
 * _strchr - ocates a character in a string.
 * @s: pointer to string to search in.
 * @c: char to search for.
 * Return: pointer to the first occurance of c in s
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
			return (s);

		s++;
	}
	if (c == '\0')
		return (s);

	return ('\0');
}
