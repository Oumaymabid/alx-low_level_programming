#include "lists.h"
/**
  *delete_nodeint_at_index - deletes the node at index index of a listint_t
  *@head: input
  *@index: input
  *Return: 1 or -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *actual = NULL;
	unsigned int j = 0;

	if (*head == NULL)
	return (-1);

	if (*head == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}

	while (j < index - 1)
	{
		if (!t || !(t->next))
		return (-1);
		t = t->next;
		j++;
	}

	actual = t->next;
	t->next = actual->next;
	free(actual);
	return (1);
}
