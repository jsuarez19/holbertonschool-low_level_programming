#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_number- Entry point of the program
 *
 * power- multiplies a number by itself 'exp' times
 *
 * @base: number of power function
 * @exp: exp of power function
 *
 * Return: void on success
 *
 */

int power(int base, int exp)
{
	int i, num;

	num = 1;

	for (i = 0; i < exp; i++)
		num = num * base;

	return (num);
}

void print_number(int n)
{
	int digits = 10;
	int character;
	int state = 0, negative = 0;

	if (n < 0)
		negative = 1;
	while (digits >= 0)
	{
		character = (n / power(10, digits)) % 10;
		if (character  == 0)
		{
			digits--;
			if (state == 1)
				_putchar(character + '0');
		}
		else
		{
			state = 1;
			if (negative == 1)
			{
				_putchar('-');
				n = n * -1;
			}
			_putchar(character + '0');
			digits--;
		}
	}
	_putchar('\n');
}
