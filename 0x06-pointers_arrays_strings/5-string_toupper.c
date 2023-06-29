#include "main.h"

/**
 * string_toupper - change all lowercase of a string
 * letter to uppercase
 * @j: pointer
 * Return: j
 */

char *string_toupper(char *j)
{
	int x;

	x = 0;
	while (j[x] != '\0')
	{
		if (j[x] >= 'a' && j[x] <= 'z')
			j[x] = j[x] - 32;
		x++;
	}
	return (j);
}
