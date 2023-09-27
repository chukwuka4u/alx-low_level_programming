#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a
 * listint_t list.
 * @h: pointer to the first node of structs
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		++nodes;
	}

	return (nodes);
}
