#include "main.h"

/**
 * _strstr - function finds the substring
 * @haystack - string to be searched
 * @needle - first occurrence of the substring
 *
 * Return: a pointer to the beginning of the located substring
 *
 * If substring is not found NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
