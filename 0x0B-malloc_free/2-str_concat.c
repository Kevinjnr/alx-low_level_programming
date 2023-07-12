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
	char *conct;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		conct[i] = s1[ci];
		i++, ci++;
	}
	conct = '\0';
	return (conct);
}
