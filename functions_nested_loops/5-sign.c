#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_sign - prints the sign of a number
 *
 * @n: number passed to the function
 *
 * Return: 1 if n is postive, -1 if is negative, 0 if is zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
