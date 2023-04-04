#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: string to search in 
 * @accept: match one byte, or @NULL
 * Return: pointer to the byte in @s that matches one the bytes in @accept or NULL if no such byte is found
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
