#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list undef_num;
	unsigned int index, sum = 0;

	if (n == 0)
		return (0);

	va_start(undef_num, n);

	for (index = 0; index < n; index++)
		sum += va_arg(undef_num, int);

	va_end(undef_num);

	return (sum);
}
