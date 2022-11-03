#include <stdio.h>

/**
 * _puts_recursion - output passed strings to screen
 * @s: passed strings
**/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar(*s);
	}
}
