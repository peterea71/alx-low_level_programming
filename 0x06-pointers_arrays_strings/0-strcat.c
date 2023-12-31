#include "main.h"
#include <stdio.h>

/**
 *  _strcat - a function that concatenates two strings.
 *   @dest:   string to then adds a terminating null byte
 *   @src:  string overwriting the terminating null
 *   Returns a pointer to the resulting string
 *   */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
