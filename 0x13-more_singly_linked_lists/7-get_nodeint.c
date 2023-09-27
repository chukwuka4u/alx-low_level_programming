#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth no of
 * a list.
 * @head: a pointer of type of listint_t, head node
 * @index: the index of the nodes, starting at 0
 * Return: A pointer of type listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
