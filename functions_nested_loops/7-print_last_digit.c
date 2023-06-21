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
	int last_digit = n % 10;

	return (last_digit);
}
