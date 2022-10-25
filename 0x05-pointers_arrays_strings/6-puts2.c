#include "main.h"

/**
 * puts2 - print a string begining from the first character and any others
 * @str: passed passed parameter (string)
*/

void puts2(char *str)
{
	int len = 0;
	int index;

	while (str[len] != '\0')
		len++;
	for (index = 0; index < len; index += 2)
	{
		_putchar(str[index]);
	}
}
