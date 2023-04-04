#include "main.h"

/**
 * _strpbrk - function that searches a string
 * @s:first occurrence in the string
 * @accept: match one byte, or @NULL
 * Return: pointer to the byte 
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
