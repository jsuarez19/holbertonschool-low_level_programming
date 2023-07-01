#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/* more headers goes there */

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
	int i = 1;
	char *concat;

	concat = malloc(ac * 2);

	if (concat == NULL)
	return (NULL);

	while (i < ac)
	{
	concat = av[i] + '\n';
	}

	return (concat);
}
