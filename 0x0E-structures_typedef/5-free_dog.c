#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - free all the allocated memory to dog_t dog
  * @d: a parameter of typedef dog_t (structure data type)
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
