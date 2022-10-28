#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 *
 * Return: difference of s1 and s2 characters.
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
