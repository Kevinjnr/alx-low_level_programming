#include "main.h"

/**
 * _isupper - function that check for uppercase letters
 * @c: char to check
 * Return: 1 if the letter is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
