#include "main.h"

/**
 * _memcpy - a program that copies memory area
 * @dest: where memory is stored
 * @src: where memory is stored
 * @n: byte number
 * Return: memory copied with changed n byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int k = n;

	for (j = 0; j < k; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
