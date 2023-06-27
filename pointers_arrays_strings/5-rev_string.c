#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer passed to the function
 *
 * Return: integer on success
 *
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
 * rev_string - reverses a string
 *
 * @s: pointer passed to the function
 *
 */
void rev_string(char *s)
{
	int array_size, first, last;
	char tmp;
	
	array_size = _strlen(s);
	last = array_size - 1;
	first = 0;

	while (first < last)
	{
		tmp = s[first];
		s[first] = s[last];
		s[last] = tmp;
		last--;
		first++;
	}
}
