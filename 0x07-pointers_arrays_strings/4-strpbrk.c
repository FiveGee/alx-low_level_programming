#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: string to search in
 * @accept: match one byte, or @NULL
 * Return: pointer to the byte in @s that matches one of the bytes in @accept,
 *         or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int k;
		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
				if (*s == accept[k])
					return (s);
			}
			s++;
		}
	return (NULL);
}
