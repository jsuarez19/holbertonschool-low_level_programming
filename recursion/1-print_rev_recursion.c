#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: pointer passed to the function
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
