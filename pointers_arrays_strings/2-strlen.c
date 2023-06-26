#include <stdio.h>
#include "main.h"
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
