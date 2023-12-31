#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @c: The number to be checked
 * Return: 0 for a character that will be a digit or 1 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
