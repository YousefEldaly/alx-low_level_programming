# include "main.h"
/**
 * sqrtSim - evaluates if sqrt is valid from 1 to n
 * @num: same number as n
 * @possibleSqrt: iterates from 1 to n
 * Return: sqrt of n (Succes).
 * on error, -1
 */

int sqrtSim(int num, int possibleSqrt)
{
	if (possibleSqrt * possibleSqrt == num)
		return (possibleSqrt);
	else if (possibleSqrt * possibleSqrt > num)
		return (-1);
	return (sqrtSim(num, possibleSqrt + 1));
}


/**
 * _sqrt_recursion - Entry point
 *
 * @n: number
 *
 * Return: square root of n
 *
 */
int _sqrt_recursion(int n)
{
	return (sqrtSim(n, 1));
}
