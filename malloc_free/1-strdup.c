#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/* more headers goes there */

/**
 * _strdup - copies a string
 *
 * @str: pointer passed to the function
 *
 * Return: a pointer to the new space in memory, NULL if it fails
 *
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *p;

	while (str[size] != '\0')
		size++;

	if (size < 1)
		return (NULL);

	p = malloc(size + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		*(p + i) = *(str + i);

	return (p);
}

