#include "main.h"

/**
 * print_sign - prints the sign of the number
 *
 * Return: 1 0 -1 for positive zero and negative respectively
 * @n: the number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
