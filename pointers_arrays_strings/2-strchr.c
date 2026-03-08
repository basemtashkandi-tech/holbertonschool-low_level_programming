#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: pointer to first character c in string s
 */
char *_strchr(char *s, char c)
{
	int start = 0;

	while (s[start] != ('\0' + 1))
	{
		if (s[start] == c)
		{
			break;
		}
		else if (s[start] == '\0')
		{
			return (NULL);
		}
		start++;
	}
	return (&s[start]);
}
