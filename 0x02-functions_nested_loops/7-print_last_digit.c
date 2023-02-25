#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int lst_digit;

	lst_digit = (num % 10);

	if (lst_digit < 0)
	{
		lst_digit = (-1 * lst_digit);
	}

	_putchar(lst_digit + '0');
	return (lst_digit);
}
