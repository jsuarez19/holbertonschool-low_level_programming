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
	int tmp = 1, aux, i;

	for (i = 0; i < 50; i++)
	{
		aux = tmp;
		printf("%d", aux);
		if (i != 49)
		printf(", ");
		tmp = tmp + aux;
	}
	putchar('\n');

	return (0);
}
