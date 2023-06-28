#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/* more headers goes there */

/**
 * create_array - creates array of chars
 *
 * @size: int passed to the function
 * @c: char passed to the function
 *
 * Return: a pointer to the array, NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size < 1)
		return (NULL);
	p = malloc(size);

	for (i = 0; i < size; i++)
	{
		*p = c;
		p++;
	}

	return (p);
}
