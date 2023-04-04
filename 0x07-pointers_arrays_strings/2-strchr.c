#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character
 * @s: the string
 * @c: the occurrence of a character
 * Return: a pointer to the first occurrence of c
 */


char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}

