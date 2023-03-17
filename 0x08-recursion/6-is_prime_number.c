#include "main.h"
/**
 * test - check from 1 to n
 * @number: same number as n
 * @iter: iterates form 1 to n
 * Return: 1 if prime(success)
 * on error, -1
 */
int test(int number, int iter)
{
	if (number == iter)
		return (1);
	else if (number % iter == 0)
		return (0);
	return (test(number, iter + 1));
}

/**
 * is_prime_number - checks if a num is prime
 * @n: num to evaluate
 * Return: 1 (Succes).
 * on error, -1.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (test(n, 2));
}
