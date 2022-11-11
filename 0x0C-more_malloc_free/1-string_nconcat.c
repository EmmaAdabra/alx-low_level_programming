#include "main.h"
#include <stdlib.h>

/**
  * _strlen - compute the lenght of a string
  * @str: first string
  * Return: length of both strings
  */
int _strlen(char *str)
{
	int index;
	int len = 0;

	for (index = 0; src[index]; index++)
		len++;
	return (len - 1);
}

/**
 * string_nconcat - concatenate two string to n size of the second string
 * @s1: first string
 * @s2: second strimg
 * @n: size of charaters to be copied
 * Return: The memory address of concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	int index, index2 = 0;
	int len1, len2;
	char *buffer;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	buffer = malloc(sizeof(char) * (len1 + n + 1));

	for (index = 0; index < len1 + n + 1; index++)
	{
		if (index < len1)
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

	if (buffer == NULL)
		return (NULL);

	return (buffer);
}
