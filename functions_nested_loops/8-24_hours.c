#include "main.h"

/**
 * jack_bauer - prints all hours and minutes of the day
 */
void jack_bauer(void)
{
	int h, m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(':');
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar('\n');
			m++;
		}
		h++;
	}
}
