#include "main.h"
/**
 * _islower - checks if a char is lowercase
 * @c: only one letter
 * Return: 1 if char is lower, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
