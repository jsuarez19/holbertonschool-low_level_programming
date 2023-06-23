#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_triangle- Entry point of the program
 *
 * @size: number passed to the function
 *
 * Return: void on success
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			j = 1;
			k = 1;
			while (j < i)
			{
				_putchar(' ');
				j--;
			}
			while (k <= i)
			{
				_putchar('#');
				k++;
			}

			_putchar('\n');
		}
	}
}
