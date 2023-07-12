#include <stdio,h>
#include "main.h"

/**
 * main - program that print the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arfuments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
