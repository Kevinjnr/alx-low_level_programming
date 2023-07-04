#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
