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
	int i, j;
	int aux = 1;

	for (i = 0; i <= 9; i++)
	{
		for (j = aux; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}

		aux++;
	}

	putchar('\n');

	return (0);
}
