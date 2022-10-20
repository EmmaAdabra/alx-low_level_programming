#include "main.h"

/**
 * times_table - outputs 9 times table
 * Return: void value
 **/

void times_table(void)
{
	int row, col, prod;

	for (col = 0; col <= 9; col++)

	{
		putchar('0');

		for (row = 1; row <= 9; row++)

		{

			putchar(',');

			putchar(' ');

			if ((row * col) <= 9)

				putchar(' ');

			else
				putchar((row * col) / 10 + '0');

			putchar((row * col) % 10 + '0');

		}
		putchar('\n');
	}
}
