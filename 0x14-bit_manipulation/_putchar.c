#include "main.h"
/**
 * _putchar - wirits a char to stdout
 * @c: char to write
 * Return: 1 on sucess. else, -1
 */
size_t _putchar(char c)
{
	return (write(1, &c, 1));
}
