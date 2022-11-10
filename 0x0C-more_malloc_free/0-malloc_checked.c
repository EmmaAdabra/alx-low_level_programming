#include "main.h"
#include <stdlib>

/**
  * malloc_checked - create or allocate a memory and return
  * the address to a pointer
  * @b: size of the memory to be created
  * Return: void
  */
void *malloc_checked(unsigned int b)
{
	void *buffer;

	buffer = malloc(b);
	if (buffer == NULL)
	{
		exit(98);
	}

	return (buffer);
}
