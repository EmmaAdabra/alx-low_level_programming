#include "main.h"

/**
 * jack_bauer - print every minutes in a day 00:00
 * Return: void function
 **/

void jack_bauer(void)
{
	int min;
	int hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
