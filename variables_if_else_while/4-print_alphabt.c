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
	char tmp = 'a';

	for (i = 0; i <= 25; i++)
	{
		if (tmp != 'e' && tmp != 'q')
		putchar(tmp);
		tmp++;
	}
	putchar('\n');

	return (0);
}
