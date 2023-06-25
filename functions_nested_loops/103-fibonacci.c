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
	long int a = 0, b = 1, sum, total = 0;
	short int i;

	for (i = 0; i < 50; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum < 4000000 && sum % 2 == 0)
			total = total + sum;
	}
	printf("%ld\n", total);

	return (0);
}
