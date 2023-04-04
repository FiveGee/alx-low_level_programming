#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: occurrence in the string 
 * @accept: match one byte, or @NULL
 * Return: Always 0 
 */

char *_strpbrk(char *s, char *accept)
{
	int j;
	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if(*s == accept[j])
			return (s);
		}
		s++;
	}

	return (0);
}
