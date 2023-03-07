#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to reverse.
 * @n: size of the array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n; ++i)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		--n;
	}
}
