#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int x, y, len;

	len = 0;

	for (x = 0; str[x] != '\0'; x++)
		len++;

	y = (len / 2);

	if ((len % 2) == 1)
		y = ((len + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
