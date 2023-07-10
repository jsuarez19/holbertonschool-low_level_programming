#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/* more headers goes there */
/**
 * free_dog - frees dogs
 *
 * @d: pointer passed to the function
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d);
}
