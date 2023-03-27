#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: the length of the string
 */

void _puts(char *str)

{
	int i = 0;

	for (; *str != '\0'; str++)
	{
	putchar(*str);
		i++;
	}
	putchar('\n');
}
