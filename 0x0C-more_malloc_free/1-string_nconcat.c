#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two string to n size of the second string
 * @s1: first string
 * @s2: second strimg
 * @n: size of charaters to be copied
 * Return: The memory address of concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index, index2 = 0;
	char *buffer;
	int indx;
	unsigned int len = 0;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";

	for (indx = 0; s1[indx]; indx++)
		len++;

	buffer = malloc(sizeof(char) * (len + n));

	if (buffer == NULL)
		return (NULL);

	for (index = 0; index < len + n; index++)
	{
		if (index < len)
		{
			buffer[index] = s1[index];
		}
		else
		{
			buffer[index] = s2[index2];
			index2++;
		}
	}

	buffer[index] = '\0';

	return (buffer);
}
