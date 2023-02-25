#include "main.h"
/*
 * main - entry point
 * return - Always 0 (success)
 */

int main(void)
{
	char *mssg = "_putchar";

	while (*mssg)
	{
		_putchar(*mssg);
		mssg++;
	}
	_putchar('\n');

	return (0);
}
