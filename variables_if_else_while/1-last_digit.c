#include <stdlib.h>
#include <time.h>
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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;

	printf("The last digit of %d is %d ", n, last_digit)
	if (last_digit > 5)
		printf("and is greater than 5");
	else if (n == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");

	return (0);
}
