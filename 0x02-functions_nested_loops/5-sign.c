#include "main.h"

/**
 * print_sign - checks if an integer is +ve, -ve or 0
 * @n: int are the required arg type
 * Return: 0 for int == 0, 1 for +ve int and -1 for -ve int
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (0);
	}
}
