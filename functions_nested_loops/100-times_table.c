#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_times_table - multiplication table
 *
 * Return: void on success
 *
 */

void print_times_table(int n)
{
	int i, j, a, b, c, num;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			num = i * j;
			a = num / 100;
			b = num / 10;
			c = num % 10;

			if (num >= 100)
				_putchar(a + '0');
			if (num >= 10)
				_putchar(b + '0');
		
			_putchar(c + '0');
			
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');

				if (i * (j + 1) < 10)
					_putchar(' ');

				if (i * (j + 1) < 100)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
