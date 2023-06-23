#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_times_table - multiplication table
 *
 * @n: number paased to the function
 *
 * Return: void on success
 *
 */

void print_times_table(int n)
{
	int i, j, a, b, c, num;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				num = i * j;
				c = num % 10;

				if (num >= 100)
				{
					num = num / 10;
					b = num % 10;
					a = num / 10;
					_putchar(a + '0');
					_putchar(b + '0');
				}
				if (num >= 10 && num <= 99)
				{
					b = num / 10;
					_putchar(b + '0');
				}
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
}
