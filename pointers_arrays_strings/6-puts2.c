#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * puts2 - prints every other character of a string
 *
 * @str: pointer passed to the function
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
