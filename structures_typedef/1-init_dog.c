#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/* more headers goes there */

/**
 * init_dog - initialize struct dog
 *
 * @d: pointer passed to the function
 * @name: pointer passed to the function
 * @age: pointer passed to the function
 * @owner: pointer passed to the function
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	dog *d = {name, age, owner};
}
