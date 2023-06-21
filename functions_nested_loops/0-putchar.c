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
	char phrase[] = "_putchar";
	int length = sizeof(phrase) - 1;

	for (i = 0; i < length; i++)
		putchar(phrase[i]);

	putchar('\n');

	return (0);
}
