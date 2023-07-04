#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @b: the constant value
 * @n: number of bytes
 * @s: starting address of memory to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
