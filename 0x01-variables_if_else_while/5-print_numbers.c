#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	int y;

	y = 0;

	do	{
		printf("%d", y);
		y++;
	}	while (y < 10);
	putchar('\n');
	return (0);
}
