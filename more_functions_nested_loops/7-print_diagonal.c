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
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}

	_putchar('\n');
}
