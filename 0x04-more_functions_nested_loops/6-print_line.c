#include "main.h"

/**
 * print_line - print a straight line using the character _.
 * @n: reprent the lenght of the line
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
