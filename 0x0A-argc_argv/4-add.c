#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: array of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;
	unsigned int y, sum = 0;
	char *f;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			f = argv[x];

			for (y = 0; y < str(f); y++;)
			{
				if (f[y] < 48 || f[y] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(f);
			f++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
