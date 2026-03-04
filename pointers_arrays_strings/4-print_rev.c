#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len; i >= 0; i--)
	{
		_putchar(*(--s));
	}
	_putchar('\n');
}
