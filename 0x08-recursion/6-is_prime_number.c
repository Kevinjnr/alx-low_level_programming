#include "main.h"

int natural_prime(int n, int i);

/**
 * is_prime_number - print if an integer is a prime number
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 f not
 */

int is_prime_number(int n)
{
	if (n <= i)
		return (0);
	return (natural_prime(n, n - 1));
}

/**
 * natural_prime - calculate if a number is
 * prime number reculsively
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is prime,0 if not
 */

int natural_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (natural_prime(n, i - 1));
}
