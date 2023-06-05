#include "lists.h"
/**
  *get_nodeint_at_index - returns the nth node of a listint_t linked list
  *@head: input
  *@index: input
  *Return: the nth node or NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *t = head;

	while (t && j < index)
	{
		t = t->next;
		j++;
	}
	return (t ? t : NULL);
}
