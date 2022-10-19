#include "main.h"

/**
 * _islower - check if a char is lower case or not
 * @c: is the input argument
 * Return: 1 if char lower and 0 if not
 **/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
