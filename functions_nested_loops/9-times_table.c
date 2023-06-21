#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * jack_bauer - Prints every minute of a day
 *
 * Return: void on success
 *
 */

void jack_bauer(void)
{
	int i, j, a, b, num;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;
			a = num / 10;
			b = num % 10;

			if (num > 10)
				_putchar(a + '0');

			_putchar(b + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');

				if (i * (j + 1) < 10)
					_putchar(' ');
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}
