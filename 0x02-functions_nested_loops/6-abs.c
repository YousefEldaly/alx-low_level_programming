#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @num: integer input
 * Return: absolute value of ab
 */
int _abs(int num)
{
	return (num * ((num > 0) - (num < 0)));
}
