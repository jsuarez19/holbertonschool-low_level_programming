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

	if (width < 0 || height < 0)
		return (NULL);

	p = malloc(width * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; i++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
