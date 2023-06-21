#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_last_digit - prints last digit
 *
 * @n: number passed to the function
 *
 * Return: last digit (again)
 *
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n >= 0)
		last_digit = n % 10;
	else
		last_digit = (-1)*n % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
