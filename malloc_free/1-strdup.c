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
	int i, size = 1;
	char *p;

	while (*str != '\0')
	{
		size++;
		str++;
	}

	if (size < 1)
		return (NULL);

	p = malloc(size);

	if (p == NULL)
		return (NULL);
	str -= size;
	for (i = 0; i < size; i++)
	{
		*p = *str;
		p++;
	}

	return (p - size);
}
