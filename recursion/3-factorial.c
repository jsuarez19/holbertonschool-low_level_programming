#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * factorial - returns the factorial of a number
 *
 * @n: number passed to the function
 *
 * Return: -1 on error, result on success
 */
int factorial(int n)
{
	int result;

	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}

	result = factorial(n - 1) * n;
	return (result);
}
