#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _pow_recursion - returns x to the power of y
 *
 * @x: base passed to the function
 * @y: exp passed to the function
 *
 * Return: -1 on error, result on success
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}

	result = _pow_recursion(x, y - 1) * x;
	return (result);
}
