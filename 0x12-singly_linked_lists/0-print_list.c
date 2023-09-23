#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: const argument of type list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int num = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		num++;
	}
	return (num);
}
