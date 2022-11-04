include "main.c"

/**
  * _strlen_recursion - returns the lenght of passed strings
  * @s: string passed to function
  * Return: return the lenght of the string
**/

int _strlen_recursion(char *s)
{
	int str_len = 0;

	if (*s)
	{
		sum = 1 + _strlen_recursion(s + 1);
	}
	return (sum);
}
