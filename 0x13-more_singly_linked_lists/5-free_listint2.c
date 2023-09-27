#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to poiter of the head node
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
