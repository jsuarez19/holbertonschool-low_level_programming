#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: adds positive numbers
 *
 * @argc: size of *argv[]
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int coinsc = 0, i;
	int money;
	int coinsv[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (money >= coinsv[i])
			coinsc += money / coinsv[i];
		money %= coinsv[i];
	}

	printf("%d\n", coinsc);

	return (0);
}
