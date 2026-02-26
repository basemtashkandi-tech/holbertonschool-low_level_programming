#include "main.h"

/**
 * _isalpha - check if char is alphabetical.
 * @c: the character
 *
 * Return: 1 if alpha and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
