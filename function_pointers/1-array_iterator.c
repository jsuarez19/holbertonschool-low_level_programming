#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/* more headers goes there */
/**
 * array_iterator - executes a function on each element of an array
 *
 * @array: pointer passed to the function
 * @size: pointer passed to the function
 * @action: pointer passed to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
