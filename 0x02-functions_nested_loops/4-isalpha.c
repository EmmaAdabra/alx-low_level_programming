#include "main.h"

/**
 * _isalpha -check if an inputed char is lower or upper case
 * @c: char c is the inputed argument
 * Return: 1 if arg is lower or upper and 0 if otherwise
 **/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
