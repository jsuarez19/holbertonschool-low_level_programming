#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strcpy - copies a string
 *
 * @dest: pointer of the destination
 * @src: pointer of the source
 *
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	dest++;
	*dest = '\0';
	return (dest);
}
