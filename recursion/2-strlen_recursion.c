#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer passed to the function
 *
 * Return: integer on success
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
	{
		return (0);
	}

	length = _strlen_recursion(s + 1) + 1;
	return (length);
}
