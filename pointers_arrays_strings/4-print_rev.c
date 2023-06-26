#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 *  * _strlen - returns the length of a string
 *   *
 *    * @s: pointer passed to the function
 *     *
 *      * Return: integer on success
 *       */
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
 * print_rev - prints a string in reverse
 *
 * @s: pointer passed to the function
 *
 */
void print_rev(char *s)
{
	int length;

	length = _strlen(s);
	s = s + length - 1;

	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
