#include "main.h"

/**
 * _strlen - function that return the length of a string
 *
 * @s: pointer of parameter
 *
 * Return: return n (length of string s)
 *
 * '/0' character for null value
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
