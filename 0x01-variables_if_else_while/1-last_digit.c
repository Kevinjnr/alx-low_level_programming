#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;

		printf("Last digit of %d is %d and is", n, z);
	if (z > 5)
		printf("greater than 5\n");
	else if (z == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}

