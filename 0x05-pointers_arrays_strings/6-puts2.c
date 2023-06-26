#include "main.h"

/**
 * puts2 - function should prints every other character of a string
 *  starting with the first character
 *  @str: input
 *  Return: print
 */

void puts2(char *str)
{
	int len = 0;
	int i = 0;
	char *x = str;
	int b;

	while (*x != '\0')
	{
		x++;
		len++;
	}
	i = len - 1;
	for (b = 0; b <= i; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
