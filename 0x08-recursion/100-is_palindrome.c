#include "main.h"
/**
 * strlength - computes the length of a string
 * @s: input string
 * Return: 1 (Success).
 */
int strlength(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlength(s + 1));
}
/**
 * pali - compares a string and its reverse
 * @s: string
 * @strlen: string length
 * Return: 1 (Succes).
 */
int pali(char *s, int strlen)
{
	if (*s != *(s + strlen))
		return (0);

	else if (*s == '\0')
		return (1);

	return (pali(s + 1, strlen - 2));
}

/**
 * is_palindrome - checks if a string is a plaindrome
 * @s: string
 * Return: 1 (Success)
 */
int is_palindrome(char *s)
{
	int length;

	length = strlength(s) - 1;
	return (pali(s, length));
}
