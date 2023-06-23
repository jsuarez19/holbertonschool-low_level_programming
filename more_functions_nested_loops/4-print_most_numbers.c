#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_most_numbers- Entry point of the program
 *
 * Return: void on success
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		_putchar(i);
	}

	_putchar('\n');
}
