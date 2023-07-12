#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: input width
 * @height: input height
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **u;
	int c, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	u = malloc(sizeof(int *) * height);

	if (u == NULL)
	{
		free(u);
		return (NULL);
	}

	for (c = 0; c < height; c++)
	{
		u[c] = malloc(sizeof(int) * width);

		if (u[c] == NULL)
		{
			for (; c >= 0; c--)
				free(u[c]);

			free(u);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (k = 0; k < width; k++)
			u[c][k] = 0;
	}
	return (u);
}

