#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: The first node of the linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t  **head)
{
	listint_t *prev = NULL, *next;

	if (head == NULL)
		return (NULL);
	
	while (*head)
	{	
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;
	return (*head);
}