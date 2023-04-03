#include "main.h"

/**
 * _memset - function fill the first n bytes of the memory area pointed
 *           with constant byte @b
 * @s: pointer to the memory area to be filled
 * @b: set value
 * @n: number of bytes to be set to the value
 *
 * Return: pointer to the memory area s
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

