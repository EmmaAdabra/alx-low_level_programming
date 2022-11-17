#include "function_pointers.h"


/**
  * print_name - print the name passed into it arguments
  * @name: a string pointer
  * @f: a pointer to a function
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	 if (name == NULL)
		return;
	 else if(f == NULL)
		 return;
	 else
		 f(name);
}
