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
	char tmp = 'z';

	for (i = 0; i <= 25; i++)
	{
		putchar(tmp);
		tmp--;
	}
	putchar('\n');

	return (0);
}
