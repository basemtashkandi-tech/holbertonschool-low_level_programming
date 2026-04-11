#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings is NULL, (nil) is printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	/* Initialize the list */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/* Fetch the next argument as a char pointer (string) */
		str = va_arg(args, char *);

		/* Defensive programming: check if the string itself is NULL */
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		/* Print the separator if it exists and we aren't on the last string */
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	/* Clean up */
	va_end(args);
}
