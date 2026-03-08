#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: from memory area
 * @dest: to memory area
 * @n: the number of bytes
 *
 * Return: pointer to memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int start = 0;

	while (start < n)
	{
		dest[start] = src[start];
		start++;
	}

	return (dest);
}
