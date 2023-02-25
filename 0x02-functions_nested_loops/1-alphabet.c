#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always (0) success
 */

int main(void)
{
	void print_alphabet(void)
	{
		for (int i = 'a'; i < 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

	return (0);
}

