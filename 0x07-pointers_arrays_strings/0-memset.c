#include "main.h"

/**
 * _memset -  function fill the first n bytes of the memory area pointed
 * @s - with constant byte @b
 * @n - bytes to be changed
 * @b - @s changed by @b
 *
 * Return:  pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)

{
unsigned int i;

for (i = 0; i < n; i++)
{

s[i] = b;

}

return (s);

}

