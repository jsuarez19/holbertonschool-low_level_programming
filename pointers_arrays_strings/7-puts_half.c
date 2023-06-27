#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * puts_half - prints second half of a string
 *
 * @str: pointer passed to the function
 *
 */
void puts_half(char *str)
{
	int length = 0;
	int i = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	while (*str != '\0')
	{
		if (i > (length / 2))
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
