#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/* more headers goes there */

/**
 * new_dog - creates a new dog
 *
 * @name: pointer passed to the function
 * @age: pointer passed to the function
 * @owner: pointer passed to the function
 *
 * Return: NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (new_dog != NULL)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}
	else
	{
		return (NULL);
}
