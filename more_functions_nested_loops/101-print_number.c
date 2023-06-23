#include <stdio.h>
#include <math.h>
#include "main.h"
/* more headers goes there */

/**
 * print_number- Entry point of the program
 *
 * Return: void on success
 *
 */
void print_number(int n)
{
	int i;
	int exp = 0;

	while (n / pow(10, exp) != 0)
		exp++;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
