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
	long int num = 612852475143;
	int prime = 2;

	while (prime != num)
	{
		while (num % prime == 0 && num != prime)
			num = num / prime;
		prime++;
	}
	printf("\n");

	return (0);
}

