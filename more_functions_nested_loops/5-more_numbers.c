#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: void on success
 *
 */

void print_alphabet_x10(void)
{
	int i, j, a, b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			a = j / 10;
			b = j % 10;

			if(j > 9)
				_putchar(a + '0');
			_putchar(b + '0');
		}

	_putchar('\n');
	}
}
