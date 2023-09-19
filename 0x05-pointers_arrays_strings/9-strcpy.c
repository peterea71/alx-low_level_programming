#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest.
 * @dest: copy to.
 * @src: copy from.
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
