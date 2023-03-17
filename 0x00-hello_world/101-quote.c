#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error code)
 */
int main(void)
{
int len = 0;
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

while (str[len] != '\0')
{
len++;
}

write(2, str, len);

return (1);
}

