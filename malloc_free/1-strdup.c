#include "main.h"
#include <stdlib.h>

/**
 * _strdup - description
 * @str: description
 *
 * Return: description
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *arr;

	if (str == NULL)
	return (NULL);

	arr = malloc(sizeof(*arr));
	if (arr == NULL)
	return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		arr[j] = str[j];
	}
	return (arr);
}
