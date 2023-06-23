#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d ", i)
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ")
		if (i % 3 != 0 && i % 5 == 0)
			printf("Buzz ")
		if (i % 15 == 0)
			printf("FizzBuzz ")
	}

	_putchar('\n');

	return (void);
}

