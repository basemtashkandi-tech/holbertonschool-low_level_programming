#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the accepted prefixes
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int i;
	int start = 0;

	while (s[start] != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[start] == accept[i])
			{
				num++;
				break;
			}
			i++;
		}
		start++;
		if (accept[i] == '\0')
		{
			return (num);
		}
	}
	return (num);
}
