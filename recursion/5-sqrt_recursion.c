#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square root of a number, or -1
 */
int _sqrt_recursion(int n)
{
	static int guess;
	int result;

	if (n < 0)
	{
		guess = 0;
		return (-1);
	}

	if (guess * guess == n)
	{
		result = guess;
		guess = 0;
		return (result);
	}

	if (guess * guess > n)
	{
		guess = 0;
		return (-1);
	}

	guess++;
	return (_sqrt_recursion(n));
}
