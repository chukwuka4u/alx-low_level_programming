#include "lists.h"

/**
 * list_len - function that returns the number
 * of elements in a linked list_t list
 * @h: const argument pointer of type list_h
 * Return: sizse_t
 */
size_t list_len (const list_t *h)
{
	unsigned int num = 0;

	while(h)
	{
		++num;
		h = h->next;
	}
	return (num);
}
