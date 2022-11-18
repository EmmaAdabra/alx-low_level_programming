#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_variables;
	char *str;
	unsigned int index;

	va_start(str_variables, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(str_variables, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && index != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(str_variables);
}
