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
	int i;
	char letter = 'a';

	for (i = 0; i <= 9; i++)
		putchar(i + '0');

	for (i = 0; i <= 5; i++)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
