#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * root_recursion - calculates que square root of a number
 *
 * @n: number passed to the function
 * @a: divisor
 *
 * Return: sqrt if the number has it. -1 otherwise
 */
int root_recursion(int n, int a)
{
	int pow, root;

	if (n < 0)
		return (-1);
	pow = a * a;
	if (pow < n)
		root = root_recursion(n, a + 1);
	if (pow == n)
		root = a;
	if (pow > n)
		root = -1;
	return (root);
}

/**
 * _sqrt_recursion - calculates sqrt
 *
 * @n: number passed to the function
 *
 * Return: root if the number has it. -1 otherwise
 */
int _sqrt_recursion(int n)
{
	int state;

	state = root_recursion(n, 1);
	return (state);
}

