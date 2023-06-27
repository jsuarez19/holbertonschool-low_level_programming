#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _puts - prints a string
 *
 * @str: pointer passed to the function
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
