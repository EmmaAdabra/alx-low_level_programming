#include "holberton.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
	int len = 0, index;
	int index2 = 0;
	char tmp;

	while (s[len] != '\n')
		len++;

	for (index = len - 1; index >= (len / 2); index--)
	{
		tmp = s[index];
		s[index] = s[index2];
		s[index2] = temp;
		index2++;
	}
}
