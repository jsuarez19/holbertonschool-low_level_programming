#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_alphabet - Entry point of the program
 *
 * Return: void on success
 *
 */
void print_alphabet()
{
	int i;
	char letter = 'a';

	for (i = 0; i < 26; i++)
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
