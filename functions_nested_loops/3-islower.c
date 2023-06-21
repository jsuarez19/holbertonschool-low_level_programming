#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _islower - checks lowercase character
 * @c: letter passed to the function
 *
 * Return: 1 if c is lowercase, 0 otherwise
 *
 */
int _islower(int c)
{
	if (c > 97 && c < 122)
		return (1);
	else
		return (0);
}
