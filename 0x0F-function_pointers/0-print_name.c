#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print a name using a function pointer.
 * @name: Name to print.
 * @f: Pointer to the function that will be used to print the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

