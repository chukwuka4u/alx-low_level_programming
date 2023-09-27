#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: a pointer to the node of struct
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t num_emt = 0;

	while (h)
	{
		h = h->next;
		++num_emt;
	}
	return (num_emt);
}
