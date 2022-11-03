#include "main.h"

/**
 * _print_rev_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}

	else
		_putchar('\n');
}
