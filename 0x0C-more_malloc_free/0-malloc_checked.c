#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked -  a function that allocates memory using malloc
 * @b: number of byte to allocate
 * Return: pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
