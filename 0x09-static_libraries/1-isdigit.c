#include "main.h"

/**
 * _isdigit - function that check for digit
 * @c: int to check
 * Return: 1 if c is a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
