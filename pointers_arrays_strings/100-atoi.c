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
	int total = 0, value;
	int sign = 1;

	while ((*s < 48 || *s > 57) && *s!= '\0')
	{
		if (*s == 45)
		       sign *= -1;
		s++;
	}

	while (*s >= 48 && *s <= 57)
	{
		value = (int)(*s - '0');
		total = total * 10 + value;
		s++;
	}

	if (sign == -1)
		total *= -1;

	return (total);
}
