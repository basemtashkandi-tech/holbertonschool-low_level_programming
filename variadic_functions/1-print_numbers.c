#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 *
 * Description: If separator is NULL, it is not printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	/* Initialize the variadic list */
	va_start(args, n);

	/* Loop through all the arguments */
	for (i = 0; i < n; i++)
	{
		/* Print the current number */
		printf("%d", va_arg(args, int));

		/* Print the separator ONLY IF it's not NULL and not the last number */
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}

	/* Always print a new line at the end */
	printf("\n");

	/* Clean up */
	va_end(args);
}
