#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer passed to the function
 * @b: pointer passed to the function
 *
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
