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

	if (str == NULL)
		return (NULL);

	while (s1[size1] != '\0')
		size++;
	while (s2[size2] != '\0')
		size++;

	p = malloc(size1 + size2);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(p + i) = *(str + i);

	for (i = 0; i <= size2; i++)
		*(p + size1 + i) = *(str + i);

	return (p);
}
