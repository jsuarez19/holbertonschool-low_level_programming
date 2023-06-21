#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _isalpha - checks for alphabetic character
 * @c: letter passed to the function
 *
 * Return: 1 if c is alphabetic, 0 otherwise
 *
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
