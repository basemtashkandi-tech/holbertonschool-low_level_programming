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
	int i = 0;
	int j;
	char *arr;

	if (str == NULL)
	return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	arr = malloc((i + 1) * sizeof(*arr));
	if (arr == NULL)
	return (NULL);

	for (j = 0; j < i + 1; j++)
	{
		arr[j] = str[j];
	}
	return (arr);
}
