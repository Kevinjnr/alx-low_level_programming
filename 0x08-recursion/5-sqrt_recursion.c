#include "main.h"

int natural_sqrt_recursion(int n, int i)
/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: number to calculate square root of
 * Return: result of natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - recurses to find the natural square
 * root of a number
 * @n: number to calculate square root
 * @i: iterate number
 * Return: result of natural square root
 */

int natural_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (natural_sqrt_recursion(n, i + 1));
}
