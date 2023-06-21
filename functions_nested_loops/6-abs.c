#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _abs - computes the absolute value a number
 *
 * @n: number passed to the function
 *
 * Return: number without sign
 *
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
