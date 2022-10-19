#include "main.h"

/**
 * jack_bauer - print every minutes in a day 00:00
 * Return: void function
 **/

void jack_bauer(void)
{
	int count = 0;
	int min;
	int hr;

	while (count <= 23)
	{
		for (min = 0; min <= 59; min++)
		{
			if (min != 59)
			{
				_putchar((hr / 10) + '0');
				_putchar((hr % 10) + '0');
			}
			else
			{
				hr++;
				_putchar(((hr - 1) / 10) + '0');
				_putchar(((hr - 1) % 10) + '0');
			}

			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		{
		count++;
	{
}
