#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - a function that prints a name.
 * @name: the name given
 * @f: function of name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}

#endif /* FUNCTION_POINTERS_H */

