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
	char *p;
	
	if (width < 0 || height < 0)
		return (NULL);

	p = malloc(size1 * size2);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (i = 0; i < height; i++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
