#include <stdio.h>
#include "lists.h"

/**
 * print_list - all the elements of a linked list printed
 * @h: the pointer to the list_t list to print
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (b)
	{
		if (!b->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", b->len, b->str);
		b = b->next;
		a++;
	}

	return (a);
}

