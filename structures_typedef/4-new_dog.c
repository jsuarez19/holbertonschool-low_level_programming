#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/* more headers goes there */
/**
 *  * _strlen - returns the length of a string
 *   *
 *    * @s: pointer passed to the function
 *     *
 *      * Return: integer on success
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	length++;

	return (length);
}

/**
 *  * _strcpy - copies a string
 *   *
 *    * @dest: pointer passed to the function
 *     * @src: pointer passed to the function
 * Return: pointer to dest on success
 */
void *_strcpy(char *dest, char *src)
{
	int i = 0;
	
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

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
	dog_t *dog2;

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
		return (NULL);
	dog2->name = malloc(_strlen(name) + 1);
	dog2->owner = malloc(_strlen(owner) + 1);

	_strcpy(dog2->name, name);
	_strcpy(dog2->owner, owner);

	if (dog2->name == NULL || dog2->owner == NULL)
	{
		free(dog2->name);
		free(dog2->owner);
		free(dog2);
		return (NULL);
	}

	dog2->age = age;

	return dog2;
}
