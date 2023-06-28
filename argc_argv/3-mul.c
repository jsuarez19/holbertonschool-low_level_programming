#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: prints the product of 2 arguments
 *
 * @argc: size of *argv[]
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int result;
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;


	printf("%d\n", result);

	return (0);
}
