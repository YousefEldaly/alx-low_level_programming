#include "main.h"
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of array
 * @c: char to be initialized
 * Return: pointer to char
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size < 1)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL || !ptr)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
