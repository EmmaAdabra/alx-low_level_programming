#include "main.h"

/**
 * rev_string - Prints a string in reverse.
 * @s: The string to be printed.
 */

void rev_string(char *s)
{
	int len = 0, index;
	int index2 = 0;
	char tmp;

	while (s[len] != '\0')
		len++;

	for (index = len - 1; index >= (len / 2); index--)
	{
		tmp = s[index];
		s[index] = s[index2];
		s[index2] = tmp;
		index2++;
	}
}
