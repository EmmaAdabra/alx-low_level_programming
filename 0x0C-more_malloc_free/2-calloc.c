#include "main.h"
#include <stdlib.h>

/**
 * _calloc - returns a pointer to an array memory
 * @nmemb: get the number of element to be stored in  the array
 * @size: get the size of the array in memeory
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *buffer;
	char *_memset;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc(size * nmemb);

	if (buffer == NULL)
		return (NULL);

	_memset = buffer;
	for (index = 0; index < (size * nmemb); index++)
		_memset[index] = '\0';

	return (buffer);

}
