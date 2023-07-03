#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/* more headers goes there */
/**
 * _strlen - returns the length of a string
 *
 * @s: pointer passed to the function
 *
 * Return: integer on success
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * argstostr - concatenates arguments
 *
 * @ac: argc passed to the function
 * @av: argv passed to the function
 *
 * Return: a pointer to the new space in memory, NULL if it fails
 *
 */
char *argstostr(int ac, char **av)
{
	int concat_length = 0;
	int i, j, k = 0;
	char *concat;

	for (i = 0; i < ac; i++)
		concat_length += _strlen(av[i]);

	concat = malloc(concat_length + ac + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[k] = av[i][j];
			k++;
		}
		concat[k] = '\n';
		k++;
	}

	return (concat);
}
