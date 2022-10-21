#include "main.h"

/**
 * _isupper - check if a letter in the alphabet is uppercase
 * @c: the input value c is integer
 * Return: 1 if uppercase and 0 otherwise
 **/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
