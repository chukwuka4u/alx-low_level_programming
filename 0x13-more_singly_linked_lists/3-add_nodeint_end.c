#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - function that adds a new node
 * at the end of the a listint_end list.
 * @head: a pointer to a pointer containing the head
 * @n: an integer argumenit, value of the node
 * Return: pointer to the struct of type listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
