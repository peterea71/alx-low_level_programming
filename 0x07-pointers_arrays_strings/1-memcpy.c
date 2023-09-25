#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a function that copies memory area
 * @dest: where the memory is cpied to
 * @src: where the byte is copied from
 * @n: number of byte to be copied
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
