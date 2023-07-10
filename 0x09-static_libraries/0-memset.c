#include "main.h"

/**
 * _memset - function that fills a block of memory with a
 * specific value
 * @s: the memory to be filled starting address
 * @b: the desired value
 * @n: numbers of byte to change
 * Return: changed array with new value of n byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
