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
	int i, aux;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			aux = i;
			if (aux > 99)
				_putchar(aux / 100 + '0');
			aux = aux % 100;
			_putchar(aux / 10 + '0');
			_putchar(aux % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	for (i = n; i < 98; i++)
	{
		aux = i;
		if (aux < 0)
		{
			_putchar('-');
			aux = aux * -1;
		}
		if (aux > 99)
		{
			_putchar(aux / 100 + '0');
			aux = aux % 100;
			if (aux / 10 == 0)
				_putchar(aux / 10 + '0');
		}
		if (aux > 9)
			_putchar(aux / 10 + '0');
		_putchar(aux % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
