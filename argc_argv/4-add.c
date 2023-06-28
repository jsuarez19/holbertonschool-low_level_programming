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
	int result, i;
	char *endpoint;
	int number;

	for (i = 1; i < argc; i++)
	{
		number = strtol(argv[i], &endpoint, 10);
		if (*endpoint != '\0')
		{
			printf("Error\n");
			return (1);
		}

		result += number;
	}

	printf("%d\n", result);

	return (0);
}
