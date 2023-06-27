#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _atoi - converts a string to an integer
 *
 * @s: pointer passed to the function
 *
 * Return: integer on success
 */
int _atoi(char *s)
{
	int total = 0;
	char sign;

	while (*s < 48 || *s > 57)
	{
		sign = *s
		s++;
	}

	while (*s >= 48 && *s <= 57)
	{
		value = (int)(*s - '0');
		total = total * 10 + value;
	}

	if (sign == 45)
		total *= -1;

	return (total);
}
