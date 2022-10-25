#include "main.h"

/**
 * print_rev - function print string in reverse order
 *
 * @s: pointer of parameter
 */

void print_rev(char *s)
{
	int length = 0;
	int len;

	while (s[length] != '\0')
		length++;

	len = length - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}

	_putchar('\n');
}
