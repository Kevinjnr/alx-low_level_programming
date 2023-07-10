#include "main.h"

/**
 * _atoi - a function that convert a string into an integer
 * @s: string to be used in the program
 * Return: integer
 */

int _atoi(char *s)
{
	int sgn = 1, x = 0;
	unsigned int unsgn = 0;

	while (!(s[x] <= '9' && s[x] >= '0') && s[x] != '\0')
	{
		if (s[x] == '-')
			sgn *= -1;
		x++;
	}
	while (s[x] <= '9' && (s[x] >= '0' && s[x] != '\0'))
	{
		unsgn = (unsgn * 10) + (s[x] - '0');
		x++;
	}
	unsgn *= sgn;
	return (unsgn);
}
