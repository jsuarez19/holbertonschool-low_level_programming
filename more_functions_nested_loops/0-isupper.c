#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _isupper - checks uppercase character
 * @c: letter passed to the function
 *
 * Return: 1 if c is uppercase, 0 otherwise
 *
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
