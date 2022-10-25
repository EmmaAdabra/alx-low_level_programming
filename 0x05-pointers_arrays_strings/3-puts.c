#include "main.h"

/**
 * _puts - function send string value to sdtout
 *
 * @str: string pointer
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
