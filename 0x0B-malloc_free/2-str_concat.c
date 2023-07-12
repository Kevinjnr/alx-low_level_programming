#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings of all size
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: both concatenate strings
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int x, cx;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = cx = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[cx] != '\0')
		cx++;
	conc = malloc(sizeof(char) * (x + cx + 1));

	if (conc == NULL)
		return (NULL);
	x = cx = 0;
	while (s1[x] != '\0')
	{
		conc[x] = s1[x];
		x++;
	}

	while (s2[cx] != '\0')
	{
		conc[x] = s1[cx];
		x++, cx++;
	}
	conc = '\0';
	return (conc);
}
