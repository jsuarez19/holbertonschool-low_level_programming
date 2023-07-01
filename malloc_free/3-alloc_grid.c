#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/* more headers goes there */

/**
 * alloc_grid - malloc 2 dimensional array
 *
 * @width: int passed to the function
 * @height: int passed to the function
 *
 * Return: a pointer to the new space in memory, NULL if it fails
 *
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **)malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
