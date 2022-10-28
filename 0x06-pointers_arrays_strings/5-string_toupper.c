#include "main.h"

/**
 * string_toupper - Changes all lowercase lettersof a string to uppercase.
 * @str: string passed to function
 * Return: the uppercase of the passed string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
