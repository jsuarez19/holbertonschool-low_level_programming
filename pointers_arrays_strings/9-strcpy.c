#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strcpy - copies a string
 *
 * @dest: pointer of the destination
 * @src: pointer of the source
 *
 * Return: the pointer to dest on success
 */
char *_strcpy(char *dest, char *src)
{
	int length = 1;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		length++;
	}
	dest++;
	*dest = '\0';
	dest -= length;
	return (dest);
}
