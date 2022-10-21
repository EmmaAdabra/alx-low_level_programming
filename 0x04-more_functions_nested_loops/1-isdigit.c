#include "main.h"

/**
 * _isdigit - check if inputed value is a digit (0 - 1)
 * @c: input value c is integer
 * Return: 1 if digit and 0 otherwise
 **/

int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
