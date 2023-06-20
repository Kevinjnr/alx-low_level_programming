#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	char c;
	char x;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (x = 'A' ; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
