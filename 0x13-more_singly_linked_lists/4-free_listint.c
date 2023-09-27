#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint list
 * @head: node to be freed
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
