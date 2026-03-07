#include "main.h"

/**
 * cap_string - changes first character string to uppercase
 * @s: the string
 *
 * Return: the new string
 */
char *cap_string(char *s)
{
	int start = 0;
	int end = 0;

	while (s[end] != '\0')
	{
		end++;
	}

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	while (start < end)
	{
		if (s[start + 1] == '\0')
			break;
		if ((s[start] >= (32) && s[start] <= (34)) ||
			s[start] == (9) || s[start] == (10) || s[start] == (44) ||
			s[start] == (40) || s[start] == (41) || s[start] == ('.') ||
			s[start] == ('?') || s[start] == (';') || s[start] == ('{') ||
			s[start] == ('}'))
		{
			if (s[start + 1] >= 'a' && s[start + 1] <= 'z')
			{
				s[start + 1] -= 32;
			}
		}
		start++;
	}
	return (s);
}
