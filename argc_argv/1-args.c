#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the number of arguments
 *
 * @argc: size of *argv[]
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
