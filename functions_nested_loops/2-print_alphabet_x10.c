#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: void on success
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		for (i = 0; i < 26; i++)
		{
			_putchar(letter);
			letter++;
		}

	_putchar('\n');
	}
}
