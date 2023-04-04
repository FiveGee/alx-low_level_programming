
#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@n: number of  bytes copied
 *@src: pointer from source  memory area
 *@dest: store to destination  memory area
 *
 *Return: dest memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{

unsigned int i;

for (i = 0; i < n; i++)

{
dest[i] = src[i];
}
return (dest);
}
