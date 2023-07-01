#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/* more headers goes there */

/**
 * str_concat - concatenates two string
 *
 * @s1: pointer passed to the function
 * @s2: pointer passed to the function
 *
 * Return: a pointer to the new space in memory, NULL if it fails
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1 = 0, size2 = 0;
	char *p;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[size1] != '\0')
			size1++;
	}

	if (s2 != NULL)
	{
		while (s2[size2] != '\0')
			size2++;
	}

	p = malloc(size1 + size2 + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(p + i) = *(s1 + i);

	for (i = 0; i < size2; i++)
		*(p + size1 + i) = *(s2 + i);

	*(p + size1 + size2) = '\0';
	return (p);
}
