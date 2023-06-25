#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	long int a = 0, b = 1, sum;
	short int i;

	for (i = 0; i < 50; i++)
	{
		sum = a + b;
		printf("%ld", sum);
		a = b;
		b = sum;
		if (i != 49)
			printf(", ");
	}
	putchar('\n');

	return (0);
}
