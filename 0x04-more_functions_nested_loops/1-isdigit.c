#include "main.h"

/**
 * _isdigit - check if inputed value is a digit (0 - 1)
 * @c: input value c is integer
 * Return: 1 if digit and 0 otherwise
 **/

int _isdigit(int c)
{

	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);

}
