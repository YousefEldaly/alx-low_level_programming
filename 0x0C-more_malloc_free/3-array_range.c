#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 *
 * Return: pointer to the arr(succes) or NULL
 */
int *array_range(int min, int max)
{
	int *arr, i = 0;

	if (min > max)
		return (NULL);

	arr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}

	return (arr);
}
