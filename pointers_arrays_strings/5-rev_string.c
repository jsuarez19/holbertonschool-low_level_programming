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
 * print_rev - prints a string in reverse
 *
 * @s: pointer passed to the function
 *
 */
void print_rev(char *s)
{
	int length;

	length = _strlen(s);

	char reverse[length];
	/*memory adress of the last character (not /0)*/

	s = s + length - 2;

	while (*s != '\0')
	{
		reverse[i] = *s;
		s--;
		i++;
	}
	i++;

	while (*s != '\0')
	{
		*s = reverse[i];
		i++;
		s++;
	}

}
