#include "main.h"

/**
 * _strcmp - function that compare string value
 * @s1: enter value
 * @s2: enter value
 * Return: s1[x] - s2[x]
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}
