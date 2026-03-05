#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 * @n: bytes
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int destlen = 0;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	while (src[i] != '\0' && n > i)
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}

	dest[destlen] = '\0';

	return (dest);
}
