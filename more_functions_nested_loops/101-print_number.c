#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_number- Entry point of the program
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
	int i;
	int exp = 0;

	while (n / power(10, exp) != 0)
		exp++;

	printf("%d", exp++);
	_putchar('\n');
}
