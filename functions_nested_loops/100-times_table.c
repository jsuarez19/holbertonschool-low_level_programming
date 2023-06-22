#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * times_table - Prints the 9 times table starting with 0
 *
 * Return: void on success
 *
 */

void times_table(void)
{
	int i, j, a, b, num;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;
			a = num / 10;
			b = num % 10;

			if (num >= 10)
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
		_putchar('\n');
	}
}
