#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/* more headers goes there */
/**
 * free_dog - frees dogs
 *
 * @d: pointer passed to the function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
