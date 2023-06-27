#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * mod - evaluates if a number is prime
 *
 * @n: number passed to the function
 * @div: divisor
 *
 * Return: 1 if the number is prime. 0 otherwise
 */
int mod(int n, int div)
{
	int result, state = 1;

	result = n % div;
	if (div < n)
	{
	if (result == 0)
		state = 0;
	mod(n, div + 1);
	}

	return (state);
}

/**
 * is_prime_number - evaluates if a number is prime
 *
 * @n: number passed to the function
 *
 * Return: 1 if the number is prime. 0 otherwise
 */
int is_prime_number(int n)
{
	int state;

	state = mod(n, 2);
	return (state);
}
