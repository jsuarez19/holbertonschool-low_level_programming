#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_diagonal- Entry point of the program
 *
 * @n: number passed to the function
 *
 * Return: void on success
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
