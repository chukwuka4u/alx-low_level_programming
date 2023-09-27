#include "lists.h"

/**
 * pop_listint - function that deletes the node of a
 * linked list
 * @head: a pointer to a pointer of the head
 * Return: integer, the value of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}
