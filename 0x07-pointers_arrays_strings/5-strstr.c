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
	unsigned int i = 0, K = 0;

	while (haystack[i])
	{
		while (needle[K] && (haystack[i] == needle[0]))
		{
			if (haystack[i + K] == needle[K])
				K++;
			else
				break;
		}
		if (needle[K])
		{
			i++;
			K = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
