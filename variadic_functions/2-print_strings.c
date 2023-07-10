#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 *
 * @separator: First argument
 * @n: Second argument
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) != NULL)
			printf("%d", va_arg(ap, char *));
		else
			printf("(nil)");
		if (separator != NULL && n - i != 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
