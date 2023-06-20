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
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
