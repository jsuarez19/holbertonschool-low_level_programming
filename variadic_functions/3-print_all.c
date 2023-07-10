#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 *
 * @format: First argument
 * @n: Second argument
 *
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (separator != NULL && n - i != 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
