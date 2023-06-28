#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the name of the program
 *
 * @argc: size of *argv[]
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
