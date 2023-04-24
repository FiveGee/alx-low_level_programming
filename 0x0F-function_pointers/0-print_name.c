#include "function_pointers.h"

/**
 * print_name - prints name using a pointer function
 * @name: the name given
 * @f: function of name
 *
 * Rteurn: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}

