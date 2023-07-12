#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings of all size
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: both concatenate strings
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i = 0, x = 0, y = 0, z = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[x])
		x++;

	z = i + x;
	conct = malloc((sizeof(char) * z) + 1);

	if (conct == NULL)
		return (NULL);
	x = 0;
	while (y < z)
	{
		if (y <= i)
			conct[y] = s1[y];

		if (y >= i)
		{
			conct[y] = s2[x];
			x++;
		}

		y++;
	}

	conct[y] = '\0';
	return (conct);
}
