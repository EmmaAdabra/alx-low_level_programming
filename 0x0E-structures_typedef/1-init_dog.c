#include "dog.h"

/**
  * init_dog - Initialize values for struct dog
  * @d: pointer to struct dog
  * @name: pointer to string
  * @age: pointer to float
  * @owner: pointer to string
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
