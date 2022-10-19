#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10x in differnt line
 **/

void print_alphabet_x10(void)
{
	int count;
	char letters;

	for (count = 0; count < 10; count++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}

	_putchar('\n');
	}
}
