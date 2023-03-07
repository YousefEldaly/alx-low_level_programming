#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be reversed.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int tmp, begin, end;

	begin = 0;
	end = n - 1;
	while (begin < end)
	{
		tmp = a[begin];
		a[begin] = a[end];
		a[end] = tmp;
		++begin;
		--end;
	}
}
