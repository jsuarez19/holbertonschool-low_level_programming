#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _islower - checks lowercase character
 *
 * Return: 1 if c is lowercase, 0 otherwise
 *
 */
int _islower(c)
{
	if (c > 97 && c < 122)
		return (1);
	else
		return (0);
}
