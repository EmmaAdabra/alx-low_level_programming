#include "main.h"

/**
 * times_table - outputs 9 times table
 * Return: void value
 **/

void times_table(void)
{
	int row, col;

	for (col = 0; col <= 9; col++)

	{
		_putchar('0');

		for (row = 1; row <= 9; row++)

		{

			_putchar(',');

			_putchar(' ');

			if ((row * col) <= 9)

				_putchar(' ');

			else
				_putchar((row * col) / 10 + '0');

			_putchar((row * col) % 10 + '0');

		}
		_putchar('\n');
	}
}
