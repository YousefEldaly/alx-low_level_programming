#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer input 1
 * @b: pointer input 2
 * Return: integrs
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
