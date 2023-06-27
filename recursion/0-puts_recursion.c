#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _puts_recursion - prints a string
 *
 * @s: pointer passed to the function
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	_putchar(*s);
	s++
	_puts_recursion(*s);
}
