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
	int i, j, k;
	int aux = 1;
	int aux_2 = 2;

	for (i = 0; i <= 9; i++)
	{
		for (j = aux; j <= 8; j++)
		{
			for (k = aux_2; k <= 9 ; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			aux_2++;
		}

		aux++;
	}

	putchar('\n');

	return (0);
}
