#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_square - Prints a square
 *
 * @size: size of the square
 *
 * Return: void on success
 *
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}

	_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
