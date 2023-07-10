#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 *
 * Description: prints a line
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int result;
	int a, b;
	int (*operator)(int, int);
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	
	result = operator(a, b);
	printf("%d\n", result);
	return (0);
}
