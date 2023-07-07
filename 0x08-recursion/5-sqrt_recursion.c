#include "main.h"

int actual_sqrt_recursion(int n, int i)
/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: number to calculate square root of
 * Return: result of natural square root
 */

int _sqrt_recursion(int n)
{
	return (actual_sqrt_recursion(n, 1));
}

/**
 * actual_sqrt_recursion - recurses to find the natural square
 * root of a number
 * @n: number to calculate square root 
 * @i: iterate number
 * Return: result of natural square root
 */

int actual_sqrt_recursion(int n, int i)
{
	int actual_sqrt = i * i;

	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}
