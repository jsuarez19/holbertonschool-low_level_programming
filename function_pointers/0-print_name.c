#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/* more headers goes there */
/**
 * print_name - prints name
 *
 * @name: pointer passed to the function
 * @f: pointer passed to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
