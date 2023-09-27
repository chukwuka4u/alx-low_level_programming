#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer to a pointer that points to the head struct
 * @n: an integer constant argument, the value of the new node
 * Return: struct of type listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;

	return (*head);
}
