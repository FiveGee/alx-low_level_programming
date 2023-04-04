#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: intial segment
 * @accept: consist only bytes
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found = 0;

    while (*s != '\0')
    {
        found = 0;
        for (int i = 0; accept[i] != '\0'; i++)
        {
            if (*s == accept[i])
            {
                count++;
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            return count;
        }

        s++;
    }

    return count;
}

