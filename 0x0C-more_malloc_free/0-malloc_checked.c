#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size to allocate
 *
 * Return: pointer to allocated memory(success)
 * on error, procecss termination
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);

}
