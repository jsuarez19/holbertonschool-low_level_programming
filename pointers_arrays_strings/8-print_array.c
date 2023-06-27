#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_array - prints elements of an array
 *
 * @a: pointer passed to the function
 * @n: number of elements to be printed
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		printf("%d", a[i - 1]);
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
