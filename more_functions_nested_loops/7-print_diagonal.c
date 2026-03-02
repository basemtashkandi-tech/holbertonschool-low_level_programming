#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: size
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
}
