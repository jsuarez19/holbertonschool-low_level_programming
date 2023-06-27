#include <stdio.h>
#include "main.h"
#include <limits.h>
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
	unsigned int total = 0;
	int value, final_total;
	int sign = 1;

	while ((*s < 48 || *s > 57) && *s != '\0')
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

	final_total = ((int)total);
	if (sign == -1)
		final_total = -((int)total);

	return (final_total);
}
