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
	int array_size, i;

	array_size = _strlen(s);

	char reverse[array_size];
	/*memory adress of the last character (not /0)*/

	s = s + array_size - 2;

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
