#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Function to add numbers
 *
 * @n: First argument
 *
 * Description: adds arguments
 *
 * Return: addition (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	va_start(ap, n);
	for (i = 0;  ; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
