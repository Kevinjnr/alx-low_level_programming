#include "main.h"

/**
 * _islower - checks for characters that are lowercase
 * @c: the character
 * Return: 1 if character is lowercase, 0 if it is not a lowercase
 */

int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
		return (1);
	if (c <= 'A' && c <= 'Z')
		return (0);
}
