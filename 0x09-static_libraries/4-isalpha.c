#include "main.h"

/**
 * _isalpha - checks if c is alphapetic
 * @c: only one letter
 * Return: 1 if c is a letter, 0 otherwiseint _isalpha(int c)
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
