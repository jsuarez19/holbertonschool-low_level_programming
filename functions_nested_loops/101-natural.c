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
	int tmp, i;

	for (i = 1024; i > 0; i--)
	{
		if (i % 3 == 0 || i % 5 == 0)
			tmp = tmp + i;
	}
	printf("%d", tmp);
	putchar('\n');

	return (0);
}
