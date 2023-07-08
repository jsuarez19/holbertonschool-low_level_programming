#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/* more headers goes there */

/**
 * print_dog - prints struct dog
 *
 * @d: pointer passed to the function
 */
void print_dog(struct dog *d)
{
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	if (d->age != NULL)
		printf("Age: %s\n", d->age);
	else
		printf("Age: (nil)\n");
	
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
