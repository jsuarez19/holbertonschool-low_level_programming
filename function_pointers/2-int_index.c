#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/* more headers goes there */
/**
 * int_index - searches for an integer
 *
 * @array: pointer passed to the function
 * @size: pointer passed to the function
 * @cmp: pointer passed to the function
 *
 * Return: index on sucess, -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result != 0)
				return (i);
		}
		return (-1);
	}

	return (-1);
}
