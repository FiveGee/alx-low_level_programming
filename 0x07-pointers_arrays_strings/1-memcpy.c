
#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *n:number of  bytes
 *src:bytes from  memory area
 *dest: store to memory area
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{

unsigned int i;

for (i = 0; i < n;)

{

dest[i] = src[i];
i++;

}

return (dest);
}
