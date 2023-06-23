#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _isdigit - checks for a digit
 *
 * @c: digit passed to the function
 *
 * Return: 1 if c is a digit, 0 otherwise
 *
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
