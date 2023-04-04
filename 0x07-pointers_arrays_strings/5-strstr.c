#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring
 * @needle - substring to be found
 * @haystack - string to be searched
 *
 * Return: a pointer to the beginning of the located substring
 *
 * If substring is not found NULL
 */

char *_strstr(char *haystack, char *needle)
{
        int i;

        if (*needle == 0)
                return (haystack);
        while (*haystack)
        {
                i = 0;

                if (haystack[i] == needle[i])
                {
                        do
                        {
                                if (needle[i + 1] == '\0')
                                        return (haystack);

                                i++;

                        }
                        while (haystack[i] == needle[i]);
                }

                haystack++;

        }

        return ('\0');
}
