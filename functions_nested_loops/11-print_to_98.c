#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_to_98 - Prints numbers from n to 98
 *
 * @n: number passed to the function
 *
 * Return: void on success
 *
 */

void print_to_98(int n)
{
	int i, a, b;

	for (i = n; i <= 98; i++)
	{
		a = i / 10;
		b = i % 10;

		if (i < 0)
		{
			_putchar('-');
			a = a * -1
		}


		if (a != 0)
			_putchar(a + '0');

		_putchar(b + '0');

		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}